# C++ 智能指针

智能指针是C++11引入的一种对象，它可以像常规指针一样用于指向动态分配的对象，但它会自动删除所指向的对象。这可以确保对象的正确、便捷的管理，并避免内存泄漏。

## 类型

C++提供了以下几种智能指针：

### 1. `std::unique_ptr`

- 唯一拥有其所指对象。
- 不能被复制到其他`unique_ptr`、传递给函数、或从函数返回。
- 可以移动。这意味着其所有权可以从一个`unique_ptr`转移到另一个。

```cpp
std::unique_ptr<int> ptr1(new int(5));
std::unique_ptr<int> ptr2 = std::move(ptr1); // 转移所有权
```

### 2\. `std::shared_ptr`

*   可以有多个`shared_ptr`共享同一个对象。
*   使用引用计数来确保当最后一个`shared_ptr`被销毁时，其所指向的对象会被自动删除。

cpp

```cpp
std::shared_ptr<int> ptr1(new int(5));
std::shared_ptr<int> ptr2 = ptr1; // 两者都指向同一个对象
```

### 3\. `std::weak_ptr`

*   是为了配合`shared_ptr`而引入的。
*   它不会更改引用计数。
*   用于防止`shared_ptr`的循环引用。

cpp

```cpp
std::shared_ptr<int> ptr1(new int(5));
std::weak_ptr<int> wptr = ptr1; // wptr是ptr1的弱引用
```

优点
--

*   避免内存泄漏。
*   自动管理资源，不需要手动释放。
*   可以用于RAII(Resource Acquisition Is Initialization)技术。

注意事项
----

*   不要混合使用普通指针和智能指针。
*   避免使用`new`和`delete`，而是使用`std::make_unique`和`std::make_shared`来创建对象。
*   注意循环引用，特别是在使用`shared_ptr`时。

---

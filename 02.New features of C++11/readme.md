# C++11 新特性

C++11 是 C++ 语言的一个重要的更新，它引入了许多新特性，使得编程更加简洁、高效和安全。以下是一些 C++11 的主要新特性：

## 1. 范围基于的 `for` 循环

C++11 引入了范围基于的 `for` 循环，使得遍历容器变得更加简洁：

```cpp
std::vector<int> vec = {1, 2, 3, 4, 5};
for (auto num : vec) {
    std::cout << num << " ";
}
```

2\. `nullptr`
-------------

C++11 引入了新的空指针常量 `nullptr`，它是类型安全的。与之相比，传统的 `NULL` 实际上是一个宏，表示 `(void*)0`，并不是类型安全的。

cpp

```cpp
int* p1 = nullptr;
if (p1 == nullptr) {
    std::cout << "p1 is a null pointer." << std::endl;
}
```

3\. 后置返回类型
----------

C++11 及后续版本中对函数返回类型的处理进行了增强和改进。现在可以使用后置返回类型来声明函数：

cpp

```cpp
auto add(int a, int b) -> int {
    return a + b;
}
```

4\. 统一的初始化语法
------------

C++11 引入了统一的初始化语法，允许使用花括号进行初始化，这也适用于类的初始化：

cpp

```cpp
class MyClass {
    int a;
    double b;
public:
    MyClass(int x, double y) : a(x), b(y) {}
};

MyClass obj{5, 3.14};
```

5\.  不想当基类的类（final关键字）
------------

使用 final 关键字可以阻止类被进一步派生。

cpp

```cpp
class Base final {
    // ...
};

// class Derived : public Base {};  // This will cause a compile-time error.
```

6\.  引用新数据类型 &&
------------

右值引用是C++11引入的，主要用于实现移动语义和完美转发。

cpp

```cpp
int&& rref = 10 + 20;
```

7\.  C++11标准库里的新函数`std::move` 
------------

`std::move` 是一个模板函数，它接受一个左值参数并返回该参数的右值引用。
使用 `std::move` 可以将左值转换为右值，从而触发移动语义。

cpp

```cpp
std::string str = "hello";
std::string movedStr = std::move(str);
```

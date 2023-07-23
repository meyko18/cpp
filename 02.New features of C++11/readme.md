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
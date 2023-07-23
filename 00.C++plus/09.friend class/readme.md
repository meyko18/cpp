# 友元 (Friend) 在 C++

友元是 C++ 中的一个重要特性，它允许某些外部函数或类访问另一个类的私有或受保护成员。这是一个强大的特性，但也需要谨慎使用，以保持封装性和面向对象设计的完整性。

## 1. 友元函数

友元函数不是类的成员函数，但它可以访问类的私有和受保护成员。为了声明一个函数为友元，你需要在类定义中使用 `friend` 关键字。

```cpp
class MyClass {
private:
    int secretValue;

public:
    MyClass(int val) : secretValue(val) {}

    // 声明友元函数
    friend void revealSecret(const MyClass& obj);
};

void revealSecret(const MyClass& obj) {
    std::cout << "The secret value is: " << obj.secretValue << std::endl;
}
```

2\. 友元类
-------

一个类可以将另一个类声明为它的友元，这样，友元类就可以访问其友元的私有和受保护成员。

cpp

```cpp
class AnotherClass;

class MyClass {
private:
    int secretValue;

public:
    MyClass(int val) : secretValue(val) {}

    // 声明友元类
    friend class AnotherClass;
};

class AnotherClass {
public:
    void showSecret(const MyClass& obj) {
        std::cout << "The secret value is: " << obj.secretValue << std::endl;
    }
};
```

3\. 注意事项
--------

*   使用友元时要小心，因为它可能破坏封装性。只有在确实需要的情况下才应使用友元。
*   友元关系不是相互的。如果 A 是 B 的友元，这并不意味着 B 也是 A 的友元。
*   友元关系不是继承的。即使 B 是 A 的友元，B 的派生类不会自动成为 A 的友元。
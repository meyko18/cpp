# C++ RTTI (Run-Time Type Identification)

RTTI 允许在程序运行时确定对象的类型。这是 C++ 中的一个强大特性，尤其在处理基类指针或引用时，它们可能实际上指向派生类的对象。

## 1. RTTI (Run-Time Type Identification)

### 1.1 `dynamic_cast` 运算符

`dynamic_cast` 用于将基类指针或引用安全地转换为派生类的指针或引用。

```cpp
class Base { virtual void foo() {} };
class Derived : public Base {};

Base* basePtr = new Derived;
Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
```

如果转换失败，例如尝试将指针转换为不正确的类型，`dynamic_cast` 将返回 `nullptr`。

### 1.2 `typeid` 运算符

`typeid` 运算符用于查询关于类型信息的对象。

cpp

```cpp
Base* basePtr = new Derived;
if (typeid(*basePtr) == typeid(Derived)) {
    std::cout << "basePtr points to a Derived object" << std::endl;
}
```

注意：使用 `typeid` 时，如果你想确定指针指向的对象的类型，不要忘记解引用指针（使用 `*` 运算符）。

### 1.3 注意点

要想 RTTI 正常工作，基类必须至少有一个虚函数。

2\. `type_info`
---------------

当你使用 `typeid` 运算符时，它返回一个 `type_info` 类型的对象，该对象包含有关类型的信息。

cpp

```cpp
const std::type_info& info = typeid(*basePtr);
std::cout << "Type name: " << info.name() << std::endl;
```

3\. 虚函数表 (VTable)
-----------------

每个有虚函数的类的对象都有一个指向虚函数表（VTable）的指针。VTable 是一个存储类的虚函数地址的表。当我们使用基类的指针或引用调用虚函数时，程序使用 VTable 来动态地确定要调用的函数。

cpp

```cpp
class Base {
public:
    virtual void show() { std::cout << "In Base" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "In Derived" << std::endl; }
};

Base* obj = new Derived;
obj->show();  // Outputs: "In Derived"
```

在上面的例子中，尽管 `obj` 是一个 `Base` 类型的指针，但由于 `show` 是一个虚函数，程序使用 VTable 动态地调用了 `Derived` 类的版本。

---


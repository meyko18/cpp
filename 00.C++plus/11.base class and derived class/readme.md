# C++ 派生类与基类

## 1. 派生类对象模型简介

当一个类从另一个类派生时，派生类通常会继承基类的所有成员变量和成员函数。但是，派生类对象的内存布局中会首先包含基类的成员，然后是派生类的成员。

```cpp
class Base {
    int base_var;
};

class Derived : public Base {
    int derived_var;
};
```

在上述例子中，`Derived` 类对象的内存布局首先包含 `base_var`，然后是 `derived_var`。

2\. 派生类构造函数
-----------

派生类的构造函数通过初始化列表来构造其基类部分。

cpp

```cpp
class Base {
public:
    Base(int a) : base_var(a) {}
private:
    int base_var;
};

class Derived : public Base {
public:
    Derived(int a, int b) : Base(a), derived_var(b) {}
private:
    int derived_var;
};
```

3\. 即当父类又当子类
------------

一个类可以是另一个类的派生类，同时也可以是其他类的基类。

cpp

```cpp
class Grandparent {
    // ...
};

class Parent : public Grandparent {
    // ...
};

class Child : public Parent {
    // ...
};
```

4\. 不想当基类的类（C++11新标准final关键字）
-----------------------------

使用 `final` 关键字可以阻止类被进一步派生。

cpp

```cpp
class Base final {
    // ...
};

// class Derived : public Base {};  // This will cause a compile-time error.
```

5\. 静态类型与动态类型
-------------

静态类型是在编译时确定的，而动态类型是在运行时确定的。

cpp

```cpp
Base* obj = new Derived();  // obj's static type is Base*, but its dynamic type is Derived*.
```

6\. 派生类向基类的隐式类型转换
-----------------

派生类的对象可以被隐式地转换为基类类型。但是，不能隐式地从基类转换为派生类。

cpp

```cpp
Derived d;
Base& b = d;  // Implicit conversion from Derived to Base.
```

7\. 父类子类之间的拷贝与赋值
----------------

当派生类对象赋值给基类对象时，只有基类部分会被拷贝或赋值，这称为对象切割。

cpp

```cpp
Base b;
Derived d;
b = d;  // Only the Base part of d is assigned to b.
```

---

# C++ 多态性与虚函数
 只有到了运行时，才能确定调用的是哪个函数，这就是多态性。
## 基本概念

- **动态绑定**：调用虚函数时，会在运行时根据对象的类型来确定调用的函数。
- **静态绑定**：调用非虚函数时，会在编译时根据指针的类型来确定调用的函数。

```cpp
Animal *pAnimal = new Bird();
pAnimal->eat();
pAnimal->Animal::eat();

pAnimal = new Cat();
pAnimal->eat();

delete pAnimal;

Animal *pAnimal2 = new Cat();
pAnimal2->eat();

delete pAnimal2;
```

*   **多态性**：体现在基类指针指向派生类对象，通过基类指针调用虚函数，此时调用的是派生类的虚函数。只有到了运行时，才能确定调用的是哪个函数。
*   **虚函数表**：系统内部维护了一个虚函数表，虚函数表中存放的是虚函数的地址，当调用虚函数时，通过对象的虚函数表找到虚函数的地址，然后调用虚函数。

Animal 基类
---------

cpp

```cpp
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void eat() = 0;
    virtual void sleep() = 0;
    virtual void breathe() = 0;
    virtual void finalFunc() final;
};
#endif // ANIMAL_H
```

*   `Animal` 是一个抽象基类，因为它有纯虚函数。
*   使用 `final` 关键字表示该函数不可以在派生类中被重写。

Cat 派生类
-------

cpp

```cpp
#include "animal.h"

#ifndef CAT_H
#define CAT_H
class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    virtual void eat() override;
    void sleep() override;
    void breathe() override;
    void purr();
};
#endif // CAT_H
```

*   `Cat` 类继承自 `Animal` 类。
*   使用 `override` 关键字表示该函数是重写基类中的虚函数，这可以避免一些错误，如函数名拼写错误等。



# 纯虚函数与抽象类

## 什么是纯虚函数？

纯虚函数是在基类中声明的虚函数，它在基类中没有定义，但要求任何派生类都必须定义自己的实现方法。纯虚函数使用`= 0`来标识。

```cpp
virtual void myFunction() = 0;
```

为什么需要纯虚函数？
----------

1.  **提供接口**：纯虚函数提供了一个框架，要求派生类按照这个框架进行实现，确保派生类有统一的接口。
2.  **防止实例化**：包含纯虚函数的类不能被实例化，确保只有具体的派生类才能创建对象。

抽象类
---

包含纯虚函数的类被称为抽象类。抽象类不能被实例化，只能作为其他类的基类。抽象类可以包含普通成员函数，数据成员和其他虚函数。

cpp

```cpp
class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0;
    void regularFunction() { /* ... */ }
};
```

注意事项
----

1.  **派生类实现**：派生类必须实现所有的纯虚函数，否则它也会变成一个抽象类。
2.  **构造函数与析构函数**：抽象类可以有构造函数和析构函数，但这些函数不能是纯虚函数。

优点
--

1.  **强制派生类实现**：确保派生类为基类中的每个纯虚函数提供实现。
2.  **提供统一接口**：使得不同的派生类对象可以统一地使用基类指针或引用来调用纯虚函数。


## 如果基类的一个成员函数没写成虚函数，会发生什么

如果基类的一个成员函数没有被声明为虚函数，以下是可能发生的情况：

1.  **静态绑定**：当一个基类的成员函数没有被声明为虚函数，它将使用静态绑定。这意味着在编译时，函数调用已经被解析，而不是在运行时。

2.  **无法实现多态**：如果您通过基类指针或引用调用该函数，并且该指针或引用实际上指向一个派生类对象，那么将调用基类版本的函数，而不是派生类版本的函数。这与多态的预期行为不符。

3.  **可能的错误**：如果您期望通过基类指针或引用调用派生类的函数实现，但该函数在基类中没有被声明为虚函数，那么您的程序可能不会按预期运行，因为它总是调用基类的函数版本。

4.  **维护问题**：如果在后期开发中，您决定将基类的一个普通成员函数更改为虚函数，那么所有的派生类都可能需要重新编译，因为虚函数表的结构可能已经改变。

5.  **性能**：非虚函数通常比虚函数有更好的性能，因为它们不需要运行时解析。但这通常只在大量调用时才明显。

**示例**：

cpp

```cpp
class Base {
public:
    void show() {
        std::cout << "Base class show function." << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived class show function." << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->show();  // 输出: Base class show function.
}
```

在上述示例中，尽管`ptr`指向的是一个`Derived`类的对象，但由于`show`函数在`Base`类中没有被声明为虚函数，所以调用的是`Base`类的`show`函数，而不是`Derived`类的`show`函数。

总之，如果您希望通过基类指针或引用实现多态行为，那么您应该使用虚函数。如果不需要多态，那么普通的成员函数就足够了。


# 虚析构函数

## 什么是虚析构函数？

虚析构函数是一个特殊的析构函数，它在基类中被声明为`virtual`。当一个类有可能被其他类继承，并且可能会通过基类指针删除派生类对象时，应该使用虚析构函数。

```cpp
virtual ~ClassName();
```

为什么需要虚析构函数？
-----------

1.  **资源释放**：如果派生类分配了动态内存或其他资源，那么在删除基类指针指向的派生类对象时，如果没有虚析构函数，派生类的析构函数不会被调用，可能导致资源泄露。
2.  **防止未定义行为**：删除一个包含非虚析构函数的基类指针，如果它实际上指向一个派生类对象，是未定义的行为。

示例
--

cpp

```cpp
class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;  // 此时会首先调用Derived的析构函数，然后调用Base的析构函数
}
```

注意事项
----

1.  **性能**：虚析构函数会增加虚函数表的大小，但这通常是一个微小的开销，与避免潜在的资源泄露和未定义行为相比，这是一个值得的代价。
2.  **不要在不可能被继承的类中使用**：如果一个类不是为继承而设计的，那么它不需要虚析构函数。

结论
--

当您的类可能被其他类继承，并且可能通过基类指针来删除派生类对象时，您应该为它提供一个虚析构函数，以确保正确的资源管理和避免未定义的行为。
// 1. 面向对象的基本概念：
// 类与对象：我们将为动物园中的每种动物定义一个类。
// 继承：我们可以有一个基类Animal，然后其他动物类（如Tiger、Bird等）可以从这个基类继承。
// 封装：每个类将封装其属性和方法。
// 多态：通过使用虚函数，我们可以实现多态。
// 2. 设计模式：
// 我们将使用“工厂方法”设计模式来创建动物对象。


#include <iostream>
#include <string>

// 基类 Animal
class Animal {
public:
    Animal(const std::string &name) : name(name) {}
    virtual ~Animal() {}

    virtual void speak() = 0;  // 纯虚函数

protected:
    std::string name;
};

// Tiger 类，继承自 Animal
class Tiger : public Animal {
public:
    Tiger(const std::string &name) : Animal(name) {}

    void speak() override {
        std::cout << name << " says: Roar!" << std::endl;
    }
};

// Bird 类，继承自 Animal
class Bird : public Animal {
public:
    Bird(const std::string &name) : Animal(name) {}

    void speak() override {
        std::cout << name << " says: Tweet!" << std::endl;
    }
};

/*
将createAnimal方法设置为静态的原因是为了允许开发者在不创建AnimalFactory实例的情况下直接使用这个方法。这样做有以下几个优点：

1.简便性：静态方法允许你直接通过类名来调用方法，而不需要先创建类的实例。这使得代码更简洁，调用更直观。
2.无状态：在这个例子中，AnimalFactory不需要保持任何状态（即没有成员变量），所以没有必要创建它的实例。静态方法不依赖于对象的状态，只依赖于它的参数。
3.资源效率：由于不需要创建AnimalFactory的实例，我们可以避免与对象生命周期相关的资源开销。
4.设计意图的明确性：将方法设置为静态可以明确表示这个方法不依赖于任何对象状态，也不会修改对象状态。这为阅读代码的人提供了清晰的信号。
*/


// 动物工厂
class AnimalFactory {
public:
    static Animal* createAnimal(const std::string &type, const std::string &name) {
        if (type == "Tiger") {
            return new Tiger(name);
        } else if (type == "Bird") {
            return new Bird(name);
        }
        return nullptr;
    }
};

int main() {
    Animal *tiger = AnimalFactory::createAnimal("Tiger", "Rajah");
    Animal *bird = AnimalFactory::createAnimal("Bird", "Blue");

    tiger->speak();
    bird->speak();

    delete tiger;
    delete bird;

    return 0;
}

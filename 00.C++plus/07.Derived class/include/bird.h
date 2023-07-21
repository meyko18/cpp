#include "animal.h"
//鸟类的定义
#ifndef BIRD_H
#define BIRD_H
class Bird : public Animal
{
public:
    Bird();
    Bird(int age, string name);
    ~Bird();


    //当一个类从另一个类派生时，它确实会继承基类的成员函数。但是，对于纯虚函数，情况有所不同。
    //纯虚函数是一种特殊的虚函数，它在基类中没有实现（也就是说，它没有函数体）。
    //它的主要目的是为了在基类中定义一个接口，该接口必须由派生类实现。
    //这意味着，如果一个基类有纯虚函数，那么任何直接从该基类派生的非抽象类都必须为这些纯虚函数提供实现。

    //重写就要声明

    void eat() override;
    void sleep() override;
    void breathe() override;
    void printInfo() override;
};
#endif // BIRD_H

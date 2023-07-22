#include "animal.h"
//一个派生类
#pragma once
class Bird : public Animal
{
public:
    Bird();
    ~Bird();
    void eat();
    void sleep();
    void breathe();
    void fly();
};

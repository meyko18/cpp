#include <iostream>
#include <string>
using namespace std;

//定义一个动物的基类
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal
{
public:
    Animal();
    Animal(int age, string name);
    virtual ~Animal();
    virtual void eat();
    virtual void sleep() = 0;
    virtual void breathe() = 0;
    virtual void printInfo() = 0;
protected:
    int m_age;
    string m_name;
};
#endif // ANIMAL_H


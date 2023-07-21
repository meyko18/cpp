#include "../include/bird.h"
#include <iostream>
#include <string>

Bird::Bird()
{
    std::cout << "Bird()" << std::endl;
}

//:Animal(age, name)：这是初始化列表。在这里，它用于调用基类 Animal 的构造函数，并将 Bird 构造函数的参数 age 和 name 
//传递给 Animal 的构造函数。这意味着当你创建一个 Bird 对象时，Animal 的构造函数会先被调用，然后才是 Bird 的构造函数。
Bird::Bird(int age, std::string name):Animal(age, name)
{
    std::cout << "Bird(int age, string name)" << std::endl;
}

Bird::~Bird()
{
    std::cout << "~Bird()" << std::endl;
}

//override：这是一个 C++11 的新特性。它用于告诉编译器，这个函数是对基类中的虚函数进行重写。
void Bird::eat()
{
    std::cout << "Bird::eat()" << std::endl;
}

void Bird::sleep()
{
    std::cout << "Bird::sleep()" << std::endl;
}

void Bird::breathe()
{
    std::cout << "Bird::breathe()" << std::endl;
}

void Bird::printInfo()
{
    std::cout <<"age is " << this->m_age << " name is " << m_name << std::endl;
}


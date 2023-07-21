#include "../include/animal.h"
#include <iostream>
#include <string>

Animal::Animal()
{
    std::cout << "Animal()" << std::endl;
}

Animal::Animal(int age, std::string name):m_age(age), m_name(name)
{
    std::cout << "Animal(int age, string name)" << std::endl;
}

Animal::~Animal()
{
    std::cout << "~Animal()" << std::endl;
}

void Animal::eat()
{
    std::cout << "Animal::eat()" << std::endl;
}

void Animal::sleep()
{
    std::cout << "Animal::sleep()" << std::endl;
}

void Animal::breathe()
{
    std::cout << "Animal::breathe()" << std::endl;
}

void Animal::printInfo()
{
    std::cout <<"age is " << m_age << " name is " << m_name << std::endl;
}
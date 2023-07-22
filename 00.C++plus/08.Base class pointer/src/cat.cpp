//类的实现
#include "../include/cat.h"

#include <iostream>
using namespace std;

Cat::Cat()
{
    cout << "Cat constructor" << endl;
}

Cat::~Cat()
{
    cout << "Cat destructor" << endl;
}


void Cat::eat()
{
    cout << "Cat eat" << endl;
}

void Cat::sleep()
{
    cout << "Cat sleep" << endl;
}

void Cat::breathe()
{
    cout << "Cat breathe" << endl;
}

void Cat::purr()
{
    cout << "Cat purr" << endl;
}

// Path: src\main.cpp


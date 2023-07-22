//基类方法的实现
#include "../include/animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
    cout << "Animal constructor" << endl;
}

Animal::~Animal()
{
    cout << "Animal destructor" << endl;
}



void Animal::finalFunc()
{
    cout << "Animal finalFunction" << endl;
}
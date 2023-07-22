//类的实现
#include "../include/bird.h"

#include <iostream>
using namespace std;

Bird::Bird()
{
    cout << "Bird constructor" << endl;
}

Bird::~Bird()
{
    cout << "Bird destructor" << endl;
}


void Bird::eat()
{
    cout << "Bird eat" << endl;
}

void Bird::sleep()
{
    cout << "Bird sleep" << endl;
}

void Bird::breathe()
{
    cout << "Bird breathe" << endl;
}

void Bird::fly()
{
    cout << "Bird fly" << endl;
}

// Path: src\cat.cpp

#include <iostream>


class Base {
public:
    virtual void show() { std::cout << "In Base" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "In Derived" << std::endl; }
};


int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
    Base* obj = new Derived;
    obj->show();  // Outputs: "In Derived"
    return 0;
}

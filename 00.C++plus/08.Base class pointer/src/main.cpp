#include <iostream>
#include "../include/animal.h"
#include "../include/bird.h"
#include "../include/cat.h"


int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;


    //调用虚函数执行的是动态绑定，调用非虚函数执行的是静态绑定。动态绑定：在运行时根据对象的类型来确定调用的函数，静态绑定：在编译时根据指针的类型来确定调用的函数。
    Animal *pAnimal = new Bird();
    pAnimal->eat();
    // pAnimal->Animal::eat();

    pAnimal = new Cat();
    pAnimal->eat();

    pAnimal->breathe();


    delete pAnimal;

    Animal *pAnimal2 = new Cat();
    pAnimal2->eat();

    delete pAnimal2;

    //多态性
    //针对虚函数来说的
    //体现在：基类指针指向派生类对象，通过基类指针调用虚函数，此时调用的是派生类的虚函数。
    //只有到了运行时，才能确定调用的是哪个函数，这就是多态性。
    //系统内部维护了一个虚函数表，虚函数表中存放的是虚函数的地址，当调用虚函数时，通过对象的虚函数表找到虚函数的地址，然后调用虚函数。


    //纯虚函数
    //纯虚函数是在基类中声明的虚函数，它在基类中没有定义，但要求任何派生类都要定义自己的实现方法。



    //基类的析构函数必须是虚函数，否则delete基类指针时，不会调用派生类的析构函数，会造成内存泄漏。

    //如果一个类想要做基类，就必须把析构函数写成虚函数，否则会造成内存泄漏。
}

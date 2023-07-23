//一个派生类
#include "animal.h"

#ifndef CAT_H
#define CAT_H
class Cat : public Animal
{
public:
    Cat();
    ~Cat();

    //一旦在基类中，某个函数被声明为纯虚函数，那么所有派生类中它都是虚函数，不管是否加virtual关键字
    //override关键字是C++11中的新特性，它表示这个函数是重写基类中的虚函数,如果不是重写的虚函数，编译器会报错,这样可以避免一些错误,比如函数名拼写错误等
    virtual void eat() override;
    virtual void sleep() override;
    void breathe() override;
    void purr();
};
#endif // CAT_H




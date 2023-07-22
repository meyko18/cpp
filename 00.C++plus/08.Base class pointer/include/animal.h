//定义一个动物基类
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void eat() = 0;//这是一个纯虚函数，纯虚函数没有函数体，派生类必须重写该函数
    virtual void sleep() = 0;
    virtual void breathe() = 0;
    //final关键字是C++11中的新特性，它表示这个函数不可以被派生类重写,和override关键字一样，虚函数专用
    virtual void finalFunc() final;
};

#endif // ANIMAL_H
//防止多次定义
#pragma once

//定义一个基础类
class Human
{
public:
    Human();
    ~Human();
    void eat();
    void sleep();
    void play();
    void work();
    void show();
    void setAge(int age);
    int getAge();
    void setName(char *name);
    char *getName();
private:
    int m_age;
    char *m_name;
    //声明一个友元函数
    friend void display(Human *h);
};
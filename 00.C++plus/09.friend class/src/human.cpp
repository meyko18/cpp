//类的实现
#include "../include/human.h"
#include <iostream>
#include <string>
using namespace std;

//构造函数
Human::Human()
{
    cout << "Human::Human()" << endl;
}

//析构函数
Human::~Human()
{
    cout << "Human::~Human()" << endl;
}

//吃饭
void Human::eat()
{
    cout << "Human::eat()" << endl;
}

//睡觉
void Human::sleep()
{
    cout << "Human::sleep()" << endl;
}

//玩耍
void Human::play()
{
    cout << "Human::play()" << endl;
}

//工作
void Human::work()
{
    cout << "Human::work()" << endl;
}

//显示信息
void Human::show()
{
    cout << "Human::show()" << endl;
}

//设置年龄
void Human::setAge(int age)
{
    this->m_age = age;
}

//获取年龄
int Human::getAge()
{
    return m_age;
}

//设置姓名
void Human::setName(char *name)
{
    this->m_name = name;
}

//获取姓名
char *Human::getName()
{
    return m_name;
}

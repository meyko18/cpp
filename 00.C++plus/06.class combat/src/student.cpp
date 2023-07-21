//这是student类的实现文件
#include "../include/student.h"
#include <iostream>
using namespace std;
Student::Student()
{
    cout << "Student()" << endl;
}

//初始化列表的方式构造
Student::Student(string name, int age, int score):m_strName(name), m_iAge(age), m_iScore(score)
{
    cout << "Student(string name, int age, int score)" << endl;
}

void Student::setName(string name)
{
    m_strName = name;
}
void Student::setAge(int age)
{
    m_iAge = age;
}
void Student::setScore(int score)
{
    m_iScore = score;
}
string Student::getName()
{
    return m_strName;
}
int Student::getAge()
{
    return m_iAge;
}
int Student::getScore()
{
    return m_iScore;
}
void Student::show()
{
    cout << m_strName << "age is " << m_iAge << ",score is " << m_iScore << endl;
}

bool Student::operator==(Student &stu)
{
    if(this->m_strName == stu.m_strName && this->m_iAge == stu.m_iAge && this->m_iScore == stu.m_iScore)
    {
        return true;
    }
    return false;
}

Student& Student::operator=(Student &stu)
{
    this->m_strName = stu.m_strName;
    this->m_iAge = stu.m_iAge;
    this->m_iScore = stu.m_iScore;
    return *this;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}


// Compare this snippet from src\main.cpp:
// #include <iostream>


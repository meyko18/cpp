//一个学生类的声明
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student
{   
    public:
        Student();
        Student(string name, int age, int score);
        void setName(string name);
        void setAge(int age);
        void setScore(int score);
        string getName();
        int getAge();
        int getScore();
        void show();

        //这是一个重载运算符的例子
        bool operator==(Student &stu);

        //赋值运算符重载
        Student& operator=(Student &stu);

        //析构函数
        ~Student();
        
    private:
        string m_strName;
        int m_iAge;
        int m_iScore;
};
#endif // STUDENT_H
// Path: src\student.cpp
// Compare this snippet from src\main.cpp:
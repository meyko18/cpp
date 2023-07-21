#include <iostream>
#include "../include/student.h"


//命令行导出目录结构
// tree /f /a > output.txt


int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
    Student *pstu = new Student("chenming", 5, 100);
    pstu->show();


    //这是一个重载运算符的例子
    Student *pstu2 = new Student("chenming", 5, 100);
    if(*pstu == *pstu2)
    {
        std::cout << "pstu == pstu2" << std::endl;
    }
    else
    {
        std::cout << "pstu != pstu2" << std::endl;
    }

    //赋值运算符重载
    Student *pstu3 = new Student("chenming", 5, 100);

    *pstu3 = *pstu2;
    pstu3->show();

    delete pstu3;
    pstu3 = NULL;


    delete pstu;
    pstu = NULL;

    return 0;

    //explicit概念，防止隐式转换，只能显示转换，比如，构造函数前加explicit，就不能隐式转换了
    
    
}

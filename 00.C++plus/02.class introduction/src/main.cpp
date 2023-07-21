#include <iostream>

//class中的权限修饰符
//public: 公有的，可以在类的内部和外部访问
//private: 私有的，只能在类的内部访问
//protected: 受保护的，可以在类的内部访问，但是在类的外部不能访问

//继承中的权限修饰符
//public: 基类中的public成员，在派生类中为public成员，在派生类的外部可以访问基类中的public成员
//private: 基类中的public成员，在派生类中为private成员，在派生类的外部不能访问基类中的public成员
//protected: 基类中的public成员，在派生类中为protected成员，在派生类的外部不能访问基类中的public成员

//C++11新特性
//1.右值引用
//2.移动语义
//3.智能指针
//4.初始化列表
//5.委托构造函数
//6.继承构造函数
//7.显式虚函数重载
//8.删除函数和默认函数
//9.强类型枚举
//10.模板别名
//11.模板变量
//12.模板模板参数
//13.变长模板
//14.constexpr函数
//15.decltype关键字
//16.auto关键字
//17.nullptr关键字
//18.静态断言
//19.模板元编程
//20.多线程
//21.并发容器
//22.原子操作
//23.正则表达式

//一、后置返回类型
//1.在C++98中，如果要定义一个返回类型为auto的函数，必须使用尾置返回类型
//2.在C++11中，可以使用尾置返回类型，也可以使用decltype关键字
//3.在C++14中，可以使用auto关键字
//4.在C++17中，可以使用auto关键字，也可以使用decltype关键字
//5.在C++20中，可以使用auto关键字，也可以使用decltype关键字，也可以使用concepts关键字
//6.在C++23中，可以使用auto关键字，也可以使用decltype关键字，也可以使用concepts关键字，也可以使用requires关键字
auto func1(int a, int b) -> int
{
    return a + b;
}

//二、内联函数：在函数的声明处加上inline关键字，表示该函数为内联函数，编译器会在编译的时候
//会尝试将该函数的代码直接插入到调用该函数的地方，而不是进行函数调用，这样可以减少函数调用的开销，
//提高程序的执行效率，但是会增加程序的代码量，所以内联函数一般用于函数体代码比较少的函数
//1.在C++98中，如果要定义一个内联函数，必须在函数的定义和声明处都加上inline关键字
//2.在C++11中，如果要定义一个内联函数，只需要在函数的声明处加上inline关键字


inline void func2()
{
    std::cout << "this is a inline func2" << std::endl;
}


//三、const char *、char const *、char * const三者的区别
//1.const char *：指向const对象的指针，指针指向的对象不能被修改，但是指针可以修改
//2.char const *：指向const对象的指针，指针指向的对象不能被修改，但是指针可以修改
//3.char * const：指向char类型的const指针，指针指向的对象可以被修改，但是指针不能修改, 必须初始化，一旦初始化就不能修改

//函数形参中带const
//1.void func3(const int a)：表示形参a为const int类型，不能被修改
//好处：可以防止误操作修改形参的值
//坏处：如果形参a为大型对象，那么在函数调用的时候，会进行值拷贝，会增加程序的开销




int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;

}

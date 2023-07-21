#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;


    //一、范围for循环
    //c++11新特性
    //语法：for(数据类型 变量名：数组名){循环语句}
    for (int i : {1, 2, 3, 4, 5})
    {
        std::cout << i << std::endl;
    }

    //二、动态内存分配问题
    //c++可分为5个内存区域
    //1.栈区：由编译器自动分配释放，存放函数的参数值，局部变量的值等
    //2.堆区：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
    //3.全局区：全局变量和静态变量的存储是放在一块的，初始化的全局变量和静态变量在一块区域，未初始化的全局变量和未初始化的静态变量在相邻的另一块区域
    //4.常量区：常量字符串就是放在这里的，程序结束后由系统释放
    //5.程序代码区：存放函数体的二进制代码

    //堆和栈的区别
    //1.申请方式不同：栈由系统自动分配，堆由程序员分配
    //2.申请后系统的响应不同：栈：只要栈的剩余空间大于所申请的空间，系统将为程序提供内存，否则将报异常提示栈溢出；

    //new和delete的使用
    //new的基本语法：new 数据类型
    //new的本质：在堆区开辟了一块内存空间
    //delete的基本语法：delete 指针
    //delete的本质：释放指针指向的内存空间
    int *p = new int;
    *p = 10;
    std::cout << *p << std::endl;

    //必须释放堆区的内存
    delete p;

    //开辟一个数组
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    //释放数组
    delete[] arr;
    
    //new和delete必须配对使用

    //三、nullptr和NULL
    //nullptr是c++11新标准中引入的关键字，是一个空指针常量
    //NULL是c++中定义的一个宏，表示空指针
    //nullptr是类型安全的，NULL不是类型安全的
    //nullptr可以转换为任意其他指针类型，NULL不能转换为整型
    //nullptr的本质是0，NULL的本质是(void*)0
    char *p1 = NULL;
    char *p2 = nullptr;
    //char *p3 = 0; //error
    //char *p4 = (void *)0; //error
    



}

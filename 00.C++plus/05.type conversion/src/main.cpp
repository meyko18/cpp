#include <iostream>




//C++的强制类型转换
//1. static_cast 用于基本数据类型之间的转换，以及父子类之间的转换
//2. const_cast 用于去除const属性, 用于指针类型之间的转换
//3. dynamic_cast 用于父子类之间的转换
//4. reinterpret_cast 用于指针类型之间的转换



int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
    //隐式类型转换
    int a = 1;
    double b = 2.0;
    a = b; //隐式类型转换，由系统自动完成，不需要程序员干预，但是可能会出现精度丢失的问题
    std::cout << "a = " << a << std::endl;


    //1. static_cast 用于基本数据类型之间的转换，以及父子类之间的转换
    double c = 3.0;
    int d = static_cast<int>(c); //强制类型转换，由程序员手动完成，需要程序员自己保证转换的安全性
    
    class A{};
    class B: public A{};
    A *a1 = new B();
    B *b1 = static_cast<B*>(a1); //把子类转换成父类，需要程序员自己保证转换的安全性

    //2. const_cast 用于去除const属性, 用于指针类型之间的转换
    const int *e = new int(4); //const修饰的变量不能被修改,e是一个指向常量的指针,指针指向的值不能被修改
    int *f = const_cast<int*>(e); //去除const属性，需要程序员自己保证转换的安全性

    //3. dynamic_cast 用于父子类之间的转换
    //dynamic_cast只能用于指针或引用的转换，不能用于基本数据类型之间的转换
    //dynamic_cast转换时会进行类型检查，如果转换失败，会返回NULL
    //dynamic_cast转换时，父类必须有虚函数，否则编译不通过
    

    //4. reinterpret_cast 用于指针类型之间的转换
    //reinterpret_cast可以把一个指针转换成一个整数，也可以把一个整数转换成一个指针
    //reinterpret_cast可以把一个指针转换成一个指向其他类型的指针，也可以把一个指向其他类型的指针转换成一个指针
    int *g = new int(5);
    int *h = reinterpret_cast<int*>(g); //把一个指针转换成一个指向其他类型的指针
    



}

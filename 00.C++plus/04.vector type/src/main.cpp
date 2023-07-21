#include <iostream>
#include <algorithm>
//vector类型
#include <vector>

//vector成员函数
//1.构造函数
//2.析构函数
//3.赋值操作符
//4.迭代器
//5.容量
//6.访问元素
//7.修改器
//8.其他




int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
    std::vector<int> v1;                          // 默认构造函数
    std::vector<int> v2(5, 10);                   // 填充5个值为10的元素
    std::vector<int> v3(v2.begin(), v2.end());    // 从另一个vector的迭代器构造
    std::vector<int> v4(v2); 

    //迭代器遍历
    for(std::vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

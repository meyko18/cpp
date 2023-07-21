策略模式排序项目
========

这是一个简单的C++项目，展示了策略模式的使用。项目模拟了不同的排序策略，如冒泡排序和快速排序。

功能
--

*   定义了一个排序策略接口`SortStrategy`。
*   提供了两种具体的排序策略：`BubbleSortStrategy`和`QuickSortStrategy`。
*   使用上下文`Context`来设置和执行策略。

如何编译和运行
-------

确保你的系统上已经安装了C++编译器。

1. 克隆或下载此项目到你的计算机。

2. 打开终端或命令提示符，导航到项目目录。

3. 使用以下命令编译项目：

   bash

   ```bash
   g++ -o strategy main.cpp
   ```

4. 运行编译后的程序：

   bash

   ```bash
   ./strategy
   ```

示例输出
----

`1 2 5 5 6 9  1 2 5 5 6 9` 

项目结构
----

*   `SortStrategy`：排序策略接口。
*   `BubbleSortStrategy` 和 `QuickSortStrategy`：实现`SortStrategy`的具体策略。
*   `Context`：上下文类，用于设置和执行策略。

策略模式
----

策略模式定义了一系列算法，并将每一个算法封装起来，使它们可以相互替换。这种模式让算法独立于使用它的客户端。

贡献
--

欢迎对此项目进行贡献！请先fork此项目，然后提交你的更改，并创建一个pull request。

许可
--

此项目采用MIT许可证。
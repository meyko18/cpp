# C++ 字符串系列常用函数

## 1.C++ `stringstream` 和 `getline` 使用指南
-----------------------------------

在C++中，`stringstream`是一个非常有用的工具，它允许你从字符串中提取值或将多个值组合成一个字符串。与此同时，`getline`函数可以用来读取流中的一行或根据特定的分隔符来读取。

以下是一个简单的指南，说明如何使用这两个功能。

### 1\. `stringstream`

#### 1.1 介绍

`stringstream`是`<sstream>`头文件中提供的一个类，它提供了一种方便的方式来处理字符串。

#### 1.2 基本使用

首先，你需要包含相应的头文件：

cpp

```cpp
#include <sstream>
```

然后，你可以创建一个`stringstream`对象：

cpp

```cpp
stringstream ss;
```

你还可以在创建`stringstream`对象时直接初始化：

cpp

```cpp
stringstream ss("your string here");
```

#### 1.3 从`stringstream`中提取值

使用`>>`运算符，你可以像使用`cin`那样从`stringstream`中提取值：

cpp

```cpp
int value;
ss >> value;
```

### 2\. `getline`

#### 2.1 介绍

`getline`是一个用于从输入流中读取一行的函数。它可以与任何输入流一起使用，包括`cin`和`stringstream`。

#### 2.2 基本使用

要使用`getline`，你需要包含`<string>`头文件：

cpp

```cpp
#include <string>
```

使用`getline`从`stringstream`中读取一个以空格分隔的单词：

cpp

```cpp
string word;
getline(ss, word, ' ');
```

在上面的例子中，`getline`会读取`ss`中的内容，直到遇到空格为止，并将读取的内容存储在`word`中。

### 示例

以下是一个简单的示例，展示了如何使用`stringstream`和`getline`：

cpp

```cpp
#include <iostream>
#include <sstream>
#include <string>

int main() {
    string sentence = "Hello World from stringstream!";
    stringstream ss(sentence);
    string word;
    while (getline(ss, word, ' ')) {
        cout << word << endl;
    }
    return 0;
}
```

输出：

arduino

```arduino
Hello
World
from
stringstream!
```

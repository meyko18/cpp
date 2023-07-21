`std::string` 成员函数与操作
---------------------

### 1\. 构造函数

cpp

```cpp
std::string s1;               // 默认构造函数
std::string s2("Hello");      // 从C字符串构造
std::string s3(s2);           // 拷贝构造函数
std::string s4(5, 'a');       // 从字符重复构造
```

### 2\. 赋值操作

cpp

```cpp
s1 = "World";                 // 使用C字符串赋值
s1 = s2;                      // 使用另一个string赋值
```

### 3\. 拼接操作

cpp

```cpp
s1 += s2;                     // 使用+=操作符
s1.append(s2);                // 使用append()函数
```

### 4\. 查找和替换

cpp

```cpp
size_t pos = s1.find("lo");   // 查找
s1.replace(0, 2, "He");       // 替换
```

### 5\. 比较操作

cpp

```cpp
if (s1 == s2) { ... }         // 使用==操作符
if (s1.compare(s2) == 0) { ... } // 使用compare()函数
```

### 6\. 子串操作

cpp

```cpp
std::string sub = s1.substr(1, 3); // 获取子串
```

### 7\. 插入和删除操作

cpp

```cpp
s1.insert(1, "abc");          // 插入
s1.erase(1, 3);               // 删除
```

### 8\. 遍历操作

cpp

```cpp
for (char c : s1) { ... }     // 范围基于的for循环
```

### 9\. 存取操作

cpp

```cpp
char ch = s1[2];              // 使用[]操作符
char ch2 = s1.at(2);          // 使用at()函数
```

### 10\. 长度操作

cpp

```cpp
size_t len = s1.length();     // 或 s1.size();
```

### 11\. 互换操作

cpp

```cpp
s1.swap(s2);                  // 交换两个字符串
```

### 12\. 清空操作

cpp

```cpp
s1.clear();                   // 清空字符串
```

### 13\. 空间操作

cpp

```cpp
s1.reserve(100);              // 预留空间
s1.shrink_to_fit();           // 释放未使用的空间
```

### 14\. 其他操作

cpp

```cpp
bool empty_check = s1.empty(); // 检查字符串是否为空
```

---


`std::vector` 成员函数与操作
---------------------

### 1\. 构造函数

cpp

```cpp
std::vector<int> v1;                          // 默认构造函数
std::vector<int> v2(5, 10);                   // 填充5个值为10的元素
std::vector<int> v3(v2.begin(), v2.end());    // 从另一个vector的迭代器构造
std::vector<int> v4(v2);                      // 拷贝构造函数
```

### 2\. 析构函数

cpp

```cpp
v1.~vector();                                 // 调用析构函数（通常不需要手动调用）
```

### 3\. 赋值操作符

cpp

```cpp
v1 = v2;                                      // 使用赋值操作符
```

### 4\. 迭代器

cpp

```cpp
std::vector<int>::iterator it = v1.begin();   // 获取开始迭代器
std::vector<int>::iterator end = v1.end();    // 获取结束迭代器
```

### 5\. 容量

cpp

```cpp
size_t size = v1.size();                      // 获取元素数量
size_t capacity = v1.capacity();              // 获取容量
bool is_empty = v1.empty();                   // 检查vector是否为空
v1.resize(10);                                // 调整大小
```

### 6\. 访问元素

cpp

```cpp
int first = v1.front();                       // 获取第一个元素
int last = v1.back();                         // 获取最后一个元素
int element = v1[2];                          // 使用[]操作符
int element_at = v1.at(2);                    // 使用at()函数
```

### 7\. 修改器

cpp

```cpp
v1.push_back(20);                             // 在末尾添加元素
v1.pop_back();                                // 删除末尾元素
v1.insert(v1.begin() + 1, 30);                // 在指定位置插入元素
v1.erase(v1.begin() + 1);                     // 删除指定位置的元素
v1.clear();                                   // 清空所有元素
```

### 8\. 其他

cpp

```cpp
v1.swap(v2);                                  // 交换两个vector的内容
```

---


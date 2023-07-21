C++ 强制类型转换详解
============

C++ 提供了四种强制类型转换操作符，用于在不同类型之间进行转换。

1\. `static_cast`
-----------------

* **用途**：用于基本数据类型之间的转换，以及父子类之间的转换。

* **示例**：

  cpp

  ```cpp
  double c = 3.0;
  int d = static_cast<int>(c); // 将double转换为int
  ```

  cpp

  ```cpp
  class A{};
  class B: public A{};
  A *a1 = new B();
  B *b1 = static_cast<B*>(a1); // 将父类指针转换为子类指针
  ```

2\. `const_cast`
----------------

* **用途**：用于去除 `const` 属性，主要用于指针类型之间的转换。

* **示例**：

  cpp

  ```cpp
  const int *e = new int(4);
  int *f = const_cast<int*>(e); // 去除const属性
  ```

3\. `dynamic_cast`
------------------

*   **用途**：用于父子类之间的转换，特别是在多态情况下。
*   **注意**：`dynamic_cast` 只能用于指针或引用的转换，不能用于基本数据类型之间的转换。转换时会进行类型检查，如果转换失败，会返回 `NULL`。转换时，父类必须有虚函数，否则编译不通过。

4\. `reinterpret_cast`
----------------------

* **用途**：用于指针类型之间的转换，或将指针与整数之间进行转换。

* **示例**：

  cpp

  ```cpp
  int *g = new int(5);
  int *h = reinterpret_cast<int*>(g); // 将一个指针转换为指向其他类型的指针
  ```

---


# C语言笔记

## 问题1

**C语言中struct的用法**

C语言中，struct是一种用于定义复合数据类型的关键字。struct允许您定义一个新类型，其中包含一组属性（称为成员变量）。您可以通过创建一个新的struct变量来使用它，并使用“.”来访问其成员变量。

例如，您可以定义一个struct来表示一个学生，其中包含姓名、年龄和成绩。您可以定义一个struct类型如下：

```
Copy code
struct Student {
  char* name;
  int age;
  float grade;
};
```

然后，您可以创建一个Student类型的变量，并使用“.”来访问其成员变量：

```
Copy code
struct Student s;
s.name = "John";
s.age = 18;
s.grade = 80.5;
```

您还可以通过将struct作为函数参数或返回值来使用它。例如，您可以定义一个函数来查找一个学生的平均成绩：

```
Copy code
struct Student getStudentAverage(struct Student s) {
  s.grade = (s.grade1 + s.grade2 + s.grade3) / 3.0;
  return s;
}
```

在这种情况下，函数getStudentAverage接收一个Student类型的参数，并返回一个新的Student类型的变量，其平均成绩被计算出来。

总之，struct是一种有用的工具，可用于定义复合数据类型，并方便地存储、访问和传递多个属性。

## 问题2

**C语言中的结构体可以定义成员函数吗**

在 C 语言中是不能定义结构体成员函数的。C 语言支持函数指针，但是这些函数指针必须作为结构体的成员，并且必须在定义结构体时就进行初始化。

例如，假设我们有一个结构体定义如下：

```
Copy code
struct foo {
  int x;
  int y;
  void (*fptr)(int);
};
```

在这个例子中，`foo` 结构体定义了一个名为 `fptr` 的函数指针成员。在定义 `foo` 结构体的变量时，必须初始化 `fptr` 成员，并且必须指定一个函数，该函数接受一个 `int` 类型的参数，并且没有返回值。

例如：

```
Copy code
void my_func(int a) {
  printf("a is %d\n", a);
}

struct foo f = {0, 0, my_func};
```

在这个例子中，我们定义了一个名为 `f` 的 `foo` 类型的变量，并将 `fptr` 成员初始化为 `my_func` 函数的地址。这样，我们就可以通过调用 `f.fptr(...)` 来调用 `my_func` 函数了。

另外，需要注意的是，C 语言不支持面向对象编程，因此无法直接在结构体中定义成员函数。如果想要实现类似的功能，可以使用函数指针来实现。
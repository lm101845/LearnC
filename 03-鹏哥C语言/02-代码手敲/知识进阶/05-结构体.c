//2022年12月24日11:13:04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct B
{
	char c;
	short s;
	double d;
};

struct Stu 
//struct：结构体关键字
//Stu：结构体类型的名字
{
	//成员变量
	char name[20];  //名字
	int age;  //年龄
	char id[20];  //学号
	struct B sb;
	//结构体的成员变量可以是另外的结构体
}s1, s2;   //这里的s1,s2也是结构体变量

//区别：
//s1,s2是全局变量
//而main里面的s是局部变量


//int main()
//{
//	//struct Stu s;  //创建了一个s对象(未初始化)
//	struct Stu xiaoming = { "小明",12,"20221224",{'w',20,3.14}};  //初始化
//
//	//结构体访问的2个操作符：点(.)和箭头(->,用在结构体指针中去)
//
//	printf("%c\n", xiaoming.sb.c);  //%c             字符
//	printf("%s\n", xiaoming.id);    //%s             字符串
//	system("pause");
//	return EXIT_SUCCESS;
//};


//int main()
//{
//	struct Stu xiaoming = { "小明",12,"20221224",{'w',20,3.14} };
//	struct Stu* ps = &xiaoming;  
//	//ps指向的是一个结构体类型
//	printf("%c\n", (*ps).sb.c);  //写法1
//	printf("%c\n", ps->sb.c);      //写法2
//	system("pause");
//	return EXIT_SUCCESS;
//}

void print1(struct Stu t)
//把xiaoming传给了t,t里面就得到了xiaoming的所有值
{
	printf("%s %d %s %c %d %lf \n",t.name,t.age,t.id,t.sb.c,t.sb.s,t.sb.d);
}

void print2(struct Stu* ps)
{
	printf("%s %d %s %c %d %lf \n", ps->name, ps->age, ps->id, ps->sb.c, ps->sb.s, ps->sb.d);
}
//int main()
//{
//	//结构体传参
//	struct Stu xiaoming = { "小明",12,"20221224",{'w',20,3.14} };
//	//写一个函数，打印xiaoming的内容
//	print1(xiaoming);	
//	//传值调用(实参传形参，形参要接受，也需要开辟那么大一块内存空间接收，不好)
//	//而且你想通过形参改变xiaoming内容，是改不了的
//	print2(&xiaoming);  
//	//传址调用——这种比较好(传地址，只用8个字节接收就好了，省内存)
//	system("pause");
//	return EXIT_SUCCESS;
//}


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
 
//每一个函数调用，都会在内存的栈区上，开辟一块空间！！
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);
	system("pause");
	return EXIT_SUCCESS;
}


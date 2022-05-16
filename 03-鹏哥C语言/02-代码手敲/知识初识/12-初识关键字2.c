//2022年5月16日14:43:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned int u_int;

//声明全局变量
//extern int g_val;
int g_val;  //外面不写extern也是可以的！！！
//声明的时候不需要指定值得，只需要指定名字和类型就可以了

//声明函数
extern int Add(int x, int y);
void test()
{
	//int a = 1;
	//每次调用test函数的时候都会创建a,a是一个局部变量
	//局部变量(进入范围——[左大括号]创建，退出范围[右大括号]销毁)
	
	//变量a前面加了static之后，它就不销毁了，下一次进入test函数的时候，a还在
	static a = 1;
	a++;
	printf("%d\n", a);
}

int main()
{

	//typedef 类型【重】定义
	//unsigned int写起来不方便，可以简化一下书写
	unsigned int num = 100;
	u_int num2 = 100;  //u_int就是unsigned int类型的类型别名

	//static     静态的
	//1.static修饰局部变量,改变了局部变量的生命周期(本质上是改变了变量的存储类型)

	//2.static修饰成员变量
	//3.static修饰函数

	//内存分类
	//1.栈区：局部变量、函数的参数
	//2.堆区：动态内存的分配
	//3.静态区：全局变量、static修饰的静态变量
	//(静态变量的生命周期和全局变量的生命周期是一样的，都非常长)
	int i = 0;
	while (i < 10) {
		test();
		i++;
	}

	printf("%d\n", g_val);

	int m = 10;
	int n = 20;
	int sum = Add(m, n);
	printf("sum=%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}

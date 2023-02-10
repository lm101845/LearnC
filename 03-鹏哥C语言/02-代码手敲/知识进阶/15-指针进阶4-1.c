//2023年2月10日13:57:27

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	//(*(void(*)())0)();
//	//把数字0转换为函数指针类型，此时0就能看成是那个函数的地址
//	//调用0地址处的函数
//	//表示把整数0强制转换成函数指针，然后调用该函数指针
//
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1. void(*)() - 函数指针类型
//	//2. (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	//<c陷阱和缺陷>
//	printf("%d\n", 123);
//	system("pause");
//	return EXIT_SUCCESS;
//}

int main()
{
	//写法1：
	void (*signal(int, void(*)(int)))(int);


	//1. signal 和()先结合，说明signal是函数名
	//2. signal函数的第一个参数的类型是int,第二个参数的类型是函数指针
	// 该函数指针，指向一个参数为int,返回类型是void的函数
	//3. signal函数的返回类型也是一个函数指针
	// 该函数指针，指向一个参数为int,返回类型是void的函数
	// signal是一个函数的声明
	
	// 可以理解为下面写法(但是语法上不支持这样写)
	//void(*)(int) signal(int,void(*)(int))  //signal函数的返回类型是一个函数指针

	//简化写法(下面2句加起来就等于上面那一句)：
	//typedef - 对类型进行重定义
	//写法2：
	typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
	pfun_t signal(int, pfun_t);
	system("pause");
	return EXIT_SUCCESS;
}

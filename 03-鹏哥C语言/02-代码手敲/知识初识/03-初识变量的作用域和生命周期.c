//2022年4月16日

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程


//在外面声明一下变量，关键字extern
//g_val这个变量是在global.c文件里面定义的，可以在这里使用
//extern类似于import
extern int g_val;

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段

//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期

int main()
{
	//printf("%d\n", a);   ——找不到a

	{
		int a = 10;
		printf("%d\n", a);
		//a只在{}里面有效
	}
	//printf("%d\n", a);  ——找不到a


	printf("%d\n", g_val);
	system("pause");
	return EXIT_SUCCESS;
}


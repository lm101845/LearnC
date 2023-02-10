//2023年2月10日14:58:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//函数指针数组 - 存放函数指针的数组

//整型指针 int*
//整型指针数组 int* arr[5];

//注：函数名相当于函数的数组
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int main()
{
	int (*pf1)(int,int) = Add;
	//这里的pf1就是指向函数的指针
	int (*pf2)(int, int) = Sub;
	//Add和Sub返回类型和参数一模一样，可以把他们放在一个数组里面
	int (*pfArr[2])(int, int) = { Add, Sub };    //pfArr就是函数指针数组
	system("pause");
	return EXIT_SUCCESS;
}

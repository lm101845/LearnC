//2023年2月9日16:00:17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void print(int* ptr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//	
//}

//一级指针传参
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//p是一级指针
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p,sz);
//	//这里是一级指针传参
//	char ch = 'w';
//	test(&ch);  //char*
//	char* p1 = &ch;
//	test(p1);
//	system("pause");
//	return EXIT_SUCCESS;
//}

//二级指针传参
//void test1(int** p2)
//{
//	**p2 = 20;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;	   //pa是一级指针
//	int** ppa = &pa;  //ppa是二级指针
//	test1(ppa);   //二级指针传参,传一级指针变量的地址
//	printf("%d\n", a);
//
//	int* arr[10] = { 0 };  
//	//数组里面的元素存储的是指针变量,它是一个指针数组
//	test1(arr);  
//	//arr是数组首元素的地址，首元素也是一个指针，指针的地址，那就是二级指针
//	//所以这个写法也是没有问题
//	printf("%d\n", *arr[0]);
//	printf("%d\n", *arr[1]);
//	printf("%d\n", *arr[9]);
//	system("pause");
//	return EXIT_SUCCESS;
//}


//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//	//函数指针 - 存放函数地址的指针
//	//&函数名 - 取到的就是函数的地址
//
//	//pf就是一个函数指针变量
//	int (*pf)(int, int) = &Add;
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//数组名 !== &数组名(不等价)
//	//函数名 === &函数名(等价)
//	system("pause");
//	return EXIT_SUCCESS;
//}


//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	void (*pt)(char*) = &test;
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf就是一个函数指针变量
//	//int (*pf)(int, int) = &Add;
//
//	int (*pf)(int, int) = Add;//Add === pf
//	//int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2
//	//int ret = Add(3, 5);//3
//	// 
//	//int ret = * pf(3, 5);//err
//
//	//printf("%d\n", ret);
//
//	return 0;
//}
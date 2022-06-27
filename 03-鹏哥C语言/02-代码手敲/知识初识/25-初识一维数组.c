//2022年7月1日15:59:34

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//int arr[8];
	//char ch[5];
	//int n = 8;
	//int arr[8];
	////int arr[n];   //错误写法：表达式中必须含有常量值

	//int a = 10;//初始化
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
	//int arr2[] = { 1,2,3,4,5 };
	//int arr2[5] = { 1,2,3,4,5 };

	//char ch1[5] = {'b', 'i', 't'};
	//char ch2[] = { 'b', 'i', 't' };

	//char ch3[5] = "bit";//b i t \0 0
	//char ch4[] = "bit";//b i t \0

	//char ch5[] = "bit";
	////[b i t \0]
	//char ch6[] = { 'b', 'i', 't' };
	////[b i t]

	//printf("%d\n", strlen(ch5));//3
	//printf("%d\n", strlen(ch6));//随机值

	//printf("%s\n", ch5);
	//printf("%s\n", ch6);

	//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("-------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}


	//	//printf("%x\n", 0x12);  //12
//	//printf("%p\n", 0x12);      //00000012  
//
// 
	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("&arr[%d] = %p\n", i, &arr[i]);
	//}

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;//数组名是数组首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	system("pause");
	return EXIT_SUCCESS;
}

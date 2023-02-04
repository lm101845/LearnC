//2022年12月23日16:32:58

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int* p;
//	//这个指针变量p没有初始化，且它为一个局部的指针变量
//	//局部变量，不初始化的话，默认是随机值
//	//则会将这个随机值当成是一个地址
//	*p = 20;
//	//随机挑选一个幸运儿变成20
//	//非法访问内存
//	//这里的p就被称为野指针了
//	//报错：使用了未初始化的局部变量p
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//		//循环11次
//	{
//		*p = i;
//		 p++;
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int * test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int * p = test();
//	*p = 20;
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int main()
//{
//	//指针初始化：当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//	//小心越界：C语言本身是不会检测数组的越界行为的
//	//指针指向空间释放及时置空(NULL)
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}


//计数器方法
int my_strlen(char * str)
{
	//\0是字符串的结束标志，所以它就找\0之前出现了多少字符
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//指针-指针的方式
int my_strlen2(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	//指针-指针得到的是两个指针之间元素的个数

	//strlen：求字符串长度
	int len = strlen("abc");
	printf("%d\n", len);  //3
	//abc在传参的时候，传过去的仅仅是字符串abc首字符a的地址
	int len2 = my_strlen("abc");
	printf("%d\n", len2);  //3

	int len3 = my_strlen2("abc");
	printf("%d\n", len3);  //3
	system("pause");
	return EXIT_SUCCESS;
}

//int main()
//{
//	system("pause");
//	return EXIT_SUCCESS;
//}
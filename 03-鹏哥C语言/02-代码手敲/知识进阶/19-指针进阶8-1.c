//2023年2月17日18:08:24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//sizeof(数组名) - 数组名表示整个数组的-计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址
int main()
{
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4/8 a + 0 是第一个元素的地址，sizeof(a + 0)计算的是地址的大小
	printf("%d\n", sizeof(*a));//4  *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
	printf("%d\n", sizeof(a + 1));//4/8 a + 1是第二个元素的地址，sizeof(a+1)计算的地址的大小
	printf("%d\n", sizeof(a[1]));//4 - 计算的是第二个元素的大小

	printf("%s\n", "=========111========");
	printf("%d\n", sizeof(&a)); //4/8 - &a虽然整个数组的地址，但是也是地址，sizeof(&a)计算的是一个地址的大小
	printf("%d\n", sizeof(* &a));//16 - 计算的数组的大小
	//&a -- int(*p)[4] = &a;
	printf("%d\n", sizeof(&a + 1));//4/8 - &a + 1 是数组后面的空间的地址
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	printf("%s\n", "=========222========");

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	//这个数组里面是没有斜杠0的
	//单引号里面表示的是字符常量，里面是没有'\0'的
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%s\n", "=========333========");
	 
	//strlen是求字符串长度的
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	printf("%s\n", "=========444========");

	char arr1[] = "abcdef";
	//[a b c d e f \0]
	printf("%d\n", sizeof(arr1));//7
	printf("%d\n", sizeof(arr1 + 0));//4/8
	printf("%d\n", sizeof(*arr1));//1
	printf("%d\n", sizeof(arr1[1]));//1
	printf("%d\n", sizeof(&arr1));//4/8  char(*)[7]
	printf("%d\n", sizeof(&arr1 + 1));//4/8 
	printf("%d\n", sizeof(&arr1[0] + 1));//4/8

	printf("%s\n", "=========555========");
	printf("%d\n", strlen(arr1));//6
	printf("%d\n", strlen(arr1 + 0));//6 
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr1));//6
	printf("%d\n", strlen(&arr1 + 1));//随机值
	printf("%d\n", strlen(&arr1[0] + 1));//5

	printf("%s\n", "=========666========");

	char* p = "qwerty";
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	system("pause");
	return EXIT_SUCCESS;
}

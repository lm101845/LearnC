//2022年9月13日21:33:40

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//数组名是什么？
//数组名是数组首元素的地址。
//但是有2个例外：
//	1.sizeof(数组名)——数组名表示整个数组——计算的是整个数组的大小，单位是字节
//	2.&数组名——数组名表示整个数组——取出的是整个数组的地址
//  除此之外，你见到的任何数组名都代表首元素地址
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr);  //数组名表示整个数组
	printf("%d\n", sz);
	//疑问：既然数组名是首元素地址，那sizeof(arr)就是首元素地址的容量，应该是4才对
	//可是这里却是40
	printf("%p\n", arr);		//数组名是首元素的地址
	printf("%p\n", &arr[0]);   //等价写法

	printf("%p\n", &arr);     //&arr取出的是数组的地址，数组名表示整个数组

	printf("%s\n", "=================");
	//整个数组的地址，和数组首元素的地址的值是一样的！！但是意义不一样，如下：
	printf("%p\n", arr + 1);  //数组首元素地址+1
	printf("%p\n", &arr+1);   //整个数组地址+1
	system("pause");
	return EXIT_SUCCESS;
}

//2023年2月13日14:35:33

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void qsort(void* base, //base中存放的是待排序数据中第一个对象的地址
//		size_t num, //排序数据元素的个数
//		size_t size,//排序数据中一个元素的大小，单位是字节
//		int (*cmp)(const void* e1, const void* e2)//是用来比较待排序数据中的2个元素的函数
//		);

//void*表示无具体类型的指针

/*
* 在标准C/C++的语法中，只有int、float、char、bool等基本的数据类型，
至于 size_t 或 size_type 都是以后的编程人员为了方便记忆所定义的
一些便于理解的由基本数据类型的变体类型。

size_t是标准C库中定义的，它是一个基本的与机器相关的无符号整数的C/C + +类型，
它是sizeof操作符返回的结果类型，该类型的大小可选择。其大小足以保证存储内存中
对象的大小（简单理解为 unsigned int就可以了，64位系统中为 long unsigned int）
。通常用sizeof(XX)操作，这个操作所得到的结果就是size_t类型。
*/

//qsort-库函数的作者————十分牛皮！！！

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//使用qsort进行整型数据排序
void test01()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
//使用qsort进行结构体排序
void test02()
{
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄来排序
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

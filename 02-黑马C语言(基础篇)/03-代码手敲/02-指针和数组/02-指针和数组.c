/*************************************************************************************
 * 文 件 名:  02-指针和数组.c
 * 创 建 者：  liming
 * 创建时间：  2022/02/28 20:33
*************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test01()
{
	//通过指针操作数组
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	for (int i = 0; i < 5; i++)
	{
		printf_s("%d\n", p[i]);         //写法1
		printf_s("%d\n", *(p + i));		//写法2
	}
	//p和arr的区别
	printf_s("sizeof p = %d\n", sizeof(p));  //4
	printf_s("sizeof p = %d\n", sizeof(arr));  //20

	//访问数组的时候，下标可以是负数吗？——可以的！！！
	int* p2 = &arr[2];
	printf_s("*p2=%d\n", *p2);
	printf_s("*p2[0]=%d\n", p2[0]);  //3
	printf_s("*p2[1]=%d\n", p2[1]);  //4
	printf_s("*p2[2]=%d\n", p2[2]);  //5
	printf_s("*p2[2]=%d\n", p2[-1]);  //2
	//p2[-1]等价于 *(p2-1)
	printf_s("*p2[2]=%d\n", p2[-2]);  //1
	printf_s("*p2[2]=%d\n", p2[-10]);  //乱码

}

void test02()
{
	int arr[5] = { 1,8,10,4,5 };
	int* p = arr;
	printf_s("%d\n", *p++);    //1
	//这个++是后置++，所以是先*p,得到的结果(1)再++
	printf_s("%d\n", (*p)++);  //8
	printf_s("%d\n", *(p++));  //9
	for (int i = 0; i < 5; i++)
	{
		printf_s("%d\n", arr[i]);      
	}
}

void test03()
{
	int arr[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	printf_s("%d\n", arr[*(arr + *(arr + arr[3]))]);  //7
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

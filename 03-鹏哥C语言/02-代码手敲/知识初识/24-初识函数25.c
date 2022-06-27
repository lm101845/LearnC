//2022年7月1日10:41:27

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(int arr[])
{
	//return 1, 2;   //这样直接写是不可以的，return只能返回一个数字
	arr[0] = 1;
	arr[1] = 2;
}

void test1(int* p1, int* p2)
{
	*p1 = 1;
	*p2 = 2;
}

int m = 1;
int n = 2;

void test2()
{
	m = 1;
	n = 2;
}

int main()
{
	//int arr[10] = { 0 };
	//test(arr);
	//printf("%d\n", arr[0]);
	//printf("%d\n", arr[1]);

	//int a = 0;
	//int b = 0;
	//test1(&a, &b);
	//printf("%d%d\n",a,b);

	test2();
	printf("%d%d\n", m,n);
	system("pause");
	return EXIT_SUCCESS;
}

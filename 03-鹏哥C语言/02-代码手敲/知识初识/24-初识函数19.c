//2022年6月25日16:13:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//求第n个斐波那契数(不适合用递归做)。（不考虑溢出）
//递归可以求解，但是效率太低——n=50要算10分钟，太慢了
int count = 0;
int Fib(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

//我们从前往后算，用循环算
int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	//int ret = Fib(n);
	int ret2 = Fib2(n);
	//printf("%d\n", ret);
	printf("%d\n", ret2);
	//printf("count = %d\n", count);  //当n=40是，count = 39088169，大量重复的计算
	system("pause");
	return EXIT_SUCCESS;
}

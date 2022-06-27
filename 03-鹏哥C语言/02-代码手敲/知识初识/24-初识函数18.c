//2022年6月25日16:04:13

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
//求n的阶乘。（不考虑溢出） 
int main()
{
	//方法1：循环
	//int n = 10;
	//scanf("%d", &n);
	//int i = 0;
	//int ret = 1;
	//for (i = 1; i <= n; i++) {
	//	ret = ret * i;
	//}
	//printf("%d\n", ret);


	//方法2：递归
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	//有一些功能：可以使用迭代的方式实现，也可以使用递归
	system("pause");
	return EXIT_SUCCESS;
}

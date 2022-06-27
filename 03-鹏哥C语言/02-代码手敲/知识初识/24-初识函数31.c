//2022年7月1日15:28:55

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
		return 1.0 / Pow(n, -k);
}
//编写一个函数实现n的k次方，使用递归实现
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	system("pause");
	return EXIT_SUCCESS;
}

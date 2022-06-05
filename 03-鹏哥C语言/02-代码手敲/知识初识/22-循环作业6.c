//2022年6月4日11:38:54

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	////给定两个数，求这两个数的最大公约数
	////这个是我自己单独写的方法，发现是可以的，嘿嘿！
	//int a = 0;
	//int b = 0;
	//int limit = 0;
	//int ret = 0;
	//scanf("%d%d", &a, &b);
	//limit = a > b ? b : a;
	//for (int i = 1; i <= limit; i++)
	//{
	//	if (a % i == 0 && b % i == 0)
	//	{
	//		ret = i;
	//	}
	//}
	//printf("最大公约数为%d\n", ret);

	//老师写法1：明显老师写法更好，我是从小到大找的，循环必须要全部完成才能找到
	//int m = 0;
	//int n = 0;
	//scanf("%d%d", &m, &n);//24 18
	//int max = 0;
	////假设最大公约数max就是m和n的较小值
	//if (m > n)
	//	max = n;
	//else
	//	max = m;

	//while (1)
	//{
	//	if (m % max == 0 && n % max == 0)
	//	{
	//		printf("最大公约数就是：%d\n", max);
	//		break;
	//	}
	//	max--;
	//}

	//老师写法2：辗转相除法——唉，数学真的挺重要啊
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);//24 18
	int t = 0;

	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("最大公约数：%d\n", n);

	//最小公倍数 = m*n/最大公约数;
	system("pause");
	return EXIT_SUCCESS;
}

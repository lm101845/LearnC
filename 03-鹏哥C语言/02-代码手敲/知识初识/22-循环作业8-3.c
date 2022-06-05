//2022年6月4日13:10:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int count = 0;
	int i = 0;

	//m = a*b
	//a和b中一定至少有一个数字是 <= 开平方m的
	//16 = 2*8 = 4*4

	//sqrt - 是开平方的函数 - math.h
	//+=2,把所有的偶数都跳过去了，代码优化
	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		//2->i-1之间的数字去试除i,看能不能整除
		int j = 0;
		int flag = 1;//假设i就是素数
		//写成开平方i就可以少判断一些了
		//比如判断101是否是素数，以前用2-100判断，现在用2-开平方(101)来判断
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//素数
		}
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return EXIT_SUCCESS;
}

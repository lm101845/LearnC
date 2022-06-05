//2022年6月4日12:42:41

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//写一个代码：打印100~200之间的素数
	//素数 - 质数
	//只能被1和它本身整除
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break; 
				//跳出循环
			}
		}
		//如果有可以整除的，跳出循环来到了这里，还要判断i == j才行
		//如果2-它本身以内都没有整除的，它也会跳到这里
		//这部分没写出来
		if (i == j)
		{
			printf("%d ", i);//素数
		}
		//printf("%d是一个素数\n", i);
	}

	system("pause");
	return EXIT_SUCCESS;
}

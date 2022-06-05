//2022年6月4日13:03:37

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//判断素数另一种方法
	int count = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//2->i-1之间的数字去试除i,看能不能整除
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j < i; j++)
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

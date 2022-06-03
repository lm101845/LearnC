//2022年6月3日 13:41:19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//while (1) 
	// {
	//	printf("hehe\n");
	//}

	//while (10) 
	// {
	//	printf("hehe\n");
	//}

	//while (0) 
	//{
	//	printf("hehe\n");
	//}

	int i = 0;
	//在while循环中，break用于永久的终止循环
	//在while循环中，continue的作用是跳过本次循环continue后边的代码
	//直接去判断部分，看是否进行下一次循环
	while (i <= 10) 
	{
		if (i == 5) 
		{
			//break;
			continue;
			//选择continue之后，打印到0 1 2 3 4之后光标还在闪，还没结束，是死循环了
		}
		printf("%d ", i);
		i++;
	}
	system("pause");
	return EXIT_SUCCESS;
}

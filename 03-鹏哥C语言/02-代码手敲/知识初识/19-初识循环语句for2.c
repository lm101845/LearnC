//2022年6月3日15:28:49

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//判断部分的省略 - 判断部分恒为真
	// //死循环
	//for (;;)
	//{
	//	printf("hehe\n");
	//}

	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		//此时只打印了3次，因为j是外面创建的，当i = 0时，进入内层循环，打印3次
		//当i = 1时，此时j = 3了，不会进入内层循环了
		{
			printf("hehe\n");
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}

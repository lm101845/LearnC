//2022年6月3日14:54:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			//只会打印0-9数字
			continue;

		putchar(ch);
	}
	system("pause");
	return EXIT_SUCCESS;
}

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//
//	return 0;
//}

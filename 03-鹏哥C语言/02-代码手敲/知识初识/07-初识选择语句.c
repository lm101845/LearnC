//2022年4月27日22:32:07


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int coding = 0;
	printf("你会去敲代码吗？（选择1 or 0）:>");
	scanf_s("%d", &coding);
	if (coding == 1)
	{
		printf("坚持，你会有好offer\n");
	}
	else
	{
		printf("放弃，回家卖红薯\n");
	}

	system("pause");
	return EXIT_SUCCESS;
}


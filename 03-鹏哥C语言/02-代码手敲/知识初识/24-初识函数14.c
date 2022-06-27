//2022年6月25日13:57:35

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("hehe\n");
	main();
	//在main函数里面调用main函数，这就是递归
	system("pause");
	return EXIT_SUCCESS;
}

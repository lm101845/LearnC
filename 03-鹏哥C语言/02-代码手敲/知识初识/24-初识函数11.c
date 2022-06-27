//2022年6月24日18:37:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//链式访问
int main()
{
	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen("abc"));

	char arr1[20] = { 0 };
	char arr2[] = "bit";
	strcpy(arr1, arr2);  //把arr2里面的内容复制到arr1里面去
	printf("%s%s\n", arr1, arr2);
	printf("%s\n",strcpy(arr1,arr2));

	printf("%s\n", "=============================");
	//第一个printf函数就是打印功能，打印43，但是返回值是字符个数
	//printf函数返回的是打印在屏幕上的字符的个数
	printf("%d", printf("%d", printf("%d", 43)));  //4321
	printf("%d", printf("%d", printf("%d\n", 43)));  //43 31(另起一行)

	printf("%s\n", "=============================");
	printf("%d", 43);  //43
	system("pause");
	return EXIT_SUCCESS;
}

//2022年6月5日17:39:59

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abc";
	strcpy(arr1, arr2);  //把arr2里面的内容复制到arr1里面
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	system("pause");
	return EXIT_SUCCESS;
}

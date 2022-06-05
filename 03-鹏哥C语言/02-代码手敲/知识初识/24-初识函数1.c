//2022年6月5日10:53:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);  //打印arr1这个字符串 %s——以字符串的格式来打印
	system("pause");
	return EXIT_SUCCESS;
}

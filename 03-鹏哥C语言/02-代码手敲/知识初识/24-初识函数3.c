//2022��6��5��17:39:59

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abc";
	strcpy(arr1, arr2);  //��arr2��������ݸ��Ƶ�arr1����
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	system("pause");
	return EXIT_SUCCESS;
}

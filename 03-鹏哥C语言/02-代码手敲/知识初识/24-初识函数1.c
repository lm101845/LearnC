//2022��6��5��10:53:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);  //��ӡarr1����ַ��� %s�������ַ����ĸ�ʽ����ӡ
	system("pause");
	return EXIT_SUCCESS;
}

//2022��4��27��22:40:34
//�������ص���Ǽ򻯴��룬���븴�á�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("��������������:>");
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��27��22:29:02

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��10 �����������ֵ
int main()
{
	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return EXIT_SUCCESS;
}

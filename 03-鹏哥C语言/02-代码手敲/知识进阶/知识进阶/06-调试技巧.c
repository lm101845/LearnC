//2023Äê1ÔÂ18ÈÕ16:17:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	system("pause");
	return EXIT_SUCCESS;
}

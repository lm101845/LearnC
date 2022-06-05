//2022Äê6ÔÂ5ÈÕ17:34:16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	system("pause");
	return EXIT_SUCCESS;
}

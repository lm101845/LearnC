//2023Äê2ÔÂ1ÈÕ14:54:53
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	union Data data;
	printf("Memory size occupied by data : %d\n", sizeof(data));
	system("pause");
	return EXIT_SUCCESS;
}

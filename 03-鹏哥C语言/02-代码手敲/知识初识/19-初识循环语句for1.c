//2022Äê6ÔÂ3ÈÕ15:03:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i = 0;

	for (i = 1; i <= 10; i++)
	{
		//if (i == 5)
		//	break;
		if (i == 5)
			continue;

		printf("%d ", i);
	}
	system("pause");
	return EXIT_SUCCESS;
}

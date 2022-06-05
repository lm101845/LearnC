//2022Äê6ÔÂ4ÈÕ11:26:27

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int x = 3;
	int y = 3;
	switch (x % 2) {
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	system("pause");
	return EXIT_SUCCESS;
}

//2022年6月3日 12:26:08

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
		//case决定入口，break决定出口
		case 1:
			printf("星期1\n");
			break;
		case 2:
			printf("星期2\n");
			break;
		case 3:
			printf("星期3\n");
			break;
		case 4:
			printf("星期4\n");
			break;
		case 5:
			printf("星期5\n");
			break;
		case 6:
			printf("星期6\n");
			break;
		case 7:
			printf("星期天\n");
			break;
	}
	system("pause");
	return EXIT_SUCCESS;
}


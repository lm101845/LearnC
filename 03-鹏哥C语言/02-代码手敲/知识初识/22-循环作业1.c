//2022年6月4日11:09:34

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//if语句中0表示假，非0表示真，1表示真，2也表示真！！
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			//赋值语句，把5赋值给i，表达式的结果就为5,5为真
			//并且i永远小于10，循环永远进行下去
			printf("%d ", i);
	}

	system("pause");
	return EXIT_SUCCESS;
}

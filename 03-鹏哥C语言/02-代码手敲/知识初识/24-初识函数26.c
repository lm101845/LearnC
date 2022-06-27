//2022年7月1日11:44:52

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

print_table(int n)
{
	int i = 0;
	//行
	for (i = 1; i <= n; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);  //9
	//函数
	print_table(n);
	//函数的起名是非常关键的，最好见名知意
	system("pause");
	return EXIT_SUCCESS;
}

//2022年6月25日15:13:45

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//编写函数不允许创建临时变量，求字符串的长度。——不能用count!!!
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int my_strlen2(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen2(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	//['b']['i']['t']['\0']
	//模拟实现一个strlen函数
	//printf("%d\n", strlen(arr));
	printf("%d\n", my_strlen(arr));   //这个方法不符合要求
	printf("%d\n", my_strlen2(arr));
	system("pause");
	return EXIT_SUCCESS;
}

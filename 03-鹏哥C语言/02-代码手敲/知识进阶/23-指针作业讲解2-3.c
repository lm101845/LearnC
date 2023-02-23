//2023年2月23日22:39:40

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

int is_string_rotate(char* str1, char* str2)
{
	int i = 0;
	int n = strlen(str1);//5
	for (i = 0; i < n; i++)
	{
		//每次左旋转一个字符
		char tmp = *str1;//1
		//2. 后边的n-1个字符往前挪动
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		//3. tmp放在最后
		*(str1 + n - 1) = tmp;

		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	system("pause");
	return EXIT_SUCCESS;
}

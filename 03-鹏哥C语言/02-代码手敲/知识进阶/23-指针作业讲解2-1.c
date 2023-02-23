//2023年2月23日17:31:07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//数组
//字符串
//数据结构



//字符串左旋
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

void string_left_rotate(char* str, int k)
{
	int i = 0;
	int n = strlen(str);
	for (i = 0; i < k; i++)
	{
		//每次左旋转一个字符
		char tmp = *str;  //1
		//2. 后边的n-1个字符往前挪动
		int j = 0;
		for (j = 0; j < n-1; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		//3. tmp放在最后
		*(str + n - 1) = tmp;
	}
}

int main()
{
	char arr[10] = "ABCDEF";
	int k = 2;
	string_left_rotate(arr,k);
	printf("%s\n", arr);
	system("pause");
	return EXIT_SUCCESS;
}

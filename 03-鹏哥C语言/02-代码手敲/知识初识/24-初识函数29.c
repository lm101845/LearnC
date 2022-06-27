//2022年7月1日14:15:57
  
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_string(char* str)
{
	//这个我是真的想不出来，真的很精妙啊
	char temp = *str;   //这个是数组首地址内容
	int len = strlen(str);
	*str = *(str + len - 1);  //把数组最后一个元素赋值给数组第一个元素
	*(str + len - 1) = '\0';
	//判断条件
	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = temp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);   //数组名arr是数组arr首元素的地址
	printf("%s\n", arr);
	system("pause");
	return EXIT_SUCCESS;
}

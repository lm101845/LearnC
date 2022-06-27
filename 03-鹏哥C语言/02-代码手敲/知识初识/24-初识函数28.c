//2022年7月1日14:00:41

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_string(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
//void reverse_string(char str[])  //这样写也行
{
	int left = 0;
	//int right = strlen(str) - 1;  //题目要求：不准使用strlen库函数
	int right = my_string(str) - 1;
	while (left < right)
	{
		//char temp = str[left];
		char temp = *(str + left);  //写法和上面效果一样
		//str[left] = str[right];
		*(str + left) = *(str + right);
		//str[right] = temp;
		*(str + right) = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);  //数组名arr是数组arr首元素的地址
	printf("%s\n", arr);  //fedcba
	system("pause");
	return EXIT_SUCCESS;
}

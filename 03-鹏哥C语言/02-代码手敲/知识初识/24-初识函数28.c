//2022��7��1��14:00:41

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
//void reverse_string(char str[])  //����дҲ��
{
	int left = 0;
	//int right = strlen(str) - 1;  //��ĿҪ�󣺲�׼ʹ��strlen�⺯��
	int right = my_string(str) - 1;
	while (left < right)
	{
		//char temp = str[left];
		char temp = *(str + left);  //д��������Ч��һ��
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
	reverse_string(arr);  //������arr������arr��Ԫ�صĵ�ַ
	printf("%s\n", arr);  //fedcba
	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��25��15:13:45

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��д��������������ʱ���������ַ����ĳ��ȡ�����������count!!!
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
	//ģ��ʵ��һ��strlen����
	//printf("%d\n", strlen(arr));
	printf("%d\n", my_strlen(arr));   //�������������Ҫ��
	printf("%d\n", my_strlen2(arr));
	system("pause");
	return EXIT_SUCCESS;
}

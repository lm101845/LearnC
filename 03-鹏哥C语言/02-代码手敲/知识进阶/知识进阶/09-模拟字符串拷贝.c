//2023��1��27��11:55:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//����д�Ĳ���
//void my_strcpy(char * dest,char * src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//�޸İ�1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//�޸İ�2
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxx";
	char arr2[] = "hello";
	//�����������arr2��������ݿ�����arr1����ȥ
	//strcpy(arr1, arr2);
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	system("pause");
	return EXIT_SUCCESS;
}

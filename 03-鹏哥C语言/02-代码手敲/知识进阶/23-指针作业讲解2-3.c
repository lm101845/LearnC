//2023��2��23��22:39:40

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

int is_string_rotate(char* str1, char* str2)
{
	int i = 0;
	int n = strlen(str1);//5
	for (i = 0; i < n; i++)
	{
		//ÿ������תһ���ַ�
		char tmp = *str1;//1
		//2. ��ߵ�n-1���ַ���ǰŲ��
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		//3. tmp�������
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

//2022��7��1��14:15:57
  
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_string(char* str)
{
	//�����������벻��������ĺܾ��
	char temp = *str;   //����������׵�ַ����
	int len = strlen(str);
	*str = *(str + len - 1);  //���������һ��Ԫ�ظ�ֵ�������һ��Ԫ��
	*(str + len - 1) = '\0';
	//�ж�����
	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = temp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);   //������arr������arr��Ԫ�صĵ�ַ
	printf("%s\n", arr);
	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��3��23:22:56

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//��Ŀ��������������������3�Σ�����3�β���������
	int i = 0;
	//������ȷ���������ַ���"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password); 
		//if (password == "123456") 
		//err 2���ַ����Ƚϣ�����ʹ��==,Ӧ��ʹ��strcmp
		if(strcmp(password,"123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}

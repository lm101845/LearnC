//2022��6��4��13:33:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//�ػ����򡪡����������ͦ�����
	//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�!
	//
	//shutdown -s -t 60
	//shutdown -a
	//�ػ�
	//C�����ṩ��һ��������system()- ִ��ϵͳ�����

	//goto ���ֻ����һ��������Χ����ת�����ܿ纯��
	
	char input[20] = { 0 };//����������Ϣ
	system("shutdown -s -t 60");//system - stdlib.h

again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	//string.h
	if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��4��12:42:41

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//дһ�����룺��ӡ100~200֮�������
	//���� - ����
	//ֻ�ܱ�1������������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break; 
				//����ѭ��
			}
		}
		//����п��������ģ�����ѭ�������������Ҫ�ж�i == j����
		//���2-���������ڶ�û�������ģ���Ҳ����������
		//�ⲿ��ûд����
		if (i == j)
		{
			printf("%d ", i);//����
		}
		//printf("%d��һ������\n", i);
	}

	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��3��15:28:49

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ��
	// //��ѭ��
	//for (;;)
	//{
	//	printf("hehe\n");
	//}

	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		//��ʱֻ��ӡ��3�Σ���Ϊj�����洴���ģ���i = 0ʱ�������ڲ�ѭ������ӡ3��
		//��i = 1ʱ����ʱj = 3�ˣ���������ڲ�ѭ����
		{
			printf("hehe\n");
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��3��23:45:30

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("*****************************\n");
	printf("*******  1. play     ********\n");
	printf("*******  0. exit     ********\n");
	printf("*****************************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1. ���������
	//rand����������һ��0-32767֮������֡�����������ֲ��������(����Ҫ����һ�����������)
	//ʱ�� - ʱ���
	//srand(100);
	//srand((unsigned int)time(NULL));
	//���������������ã�ֻ��Ҫ����һ�ξ����ˣ��ŵ�main��������ȥ
	int ret = rand() % 100 + 1;   //%100��������0-99(�������Ǳȱ�����С)��Ȼ��+1����Χ����1-100
	//printf("%d\n", ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	//��������Ϸ
	//1. �Զ�����һ��1-100֮��������
	//2. ������
	//  a. �¶��ˣ��͹�ϲ�㣬��Ϸ����
	//  b. ��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
	//3. ��Ϸ����һֱ�棬�����˳���Ϸ

	//ʹ��do...whileѭ������ˣ���Ϊ������һ����Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();  //��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
	system("pause");
	return EXIT_SUCCESS;
}

//2022��11��26��11:18:26

#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("******    1. play      *******\n");
	printf("******    0. exit      *******\n");
	printf("******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };  //��Ų��úõ��׵���Ϣ
	//9-9���̣�Ϊ�˱���Ҳ���ж���Χ8�������Ǹ���������
	char show[ROWS][COLS] = {0};   //����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	//��ӡ����(ֻ��ӡ���м�9-9���ӵ�����,����һȦ�����������õģ����ô� )
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);

	//������(��9-9�����������10�����꣬���׷Ž�ȥ)
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���(ֻ�Ų�9-9��Χ�����)
	//���Ų��������Ϣ��mine���鴫��show����
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();  //ɨ����Ϸ
			printf("ɨ��\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while (input);
	system("pause");
	return EXIT_SUCCESS;
}

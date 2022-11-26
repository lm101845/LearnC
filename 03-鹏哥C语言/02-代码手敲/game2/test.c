//2022年11月26日11:18:26

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
	char mine[ROWS][COLS] = { 0 };  //存放布置好的雷的信息
	//9-9棋盘，为了边上也能判断周围8个，我们给棋牌扩大
	char show[ROWS][COLS] = {0};   //存放排查出的雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	//打印棋盘(只打印它中间9-9格子的内容,外面一圈是用来辅助用的，不用打 )
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);

	//布置雷(在9-9格子里随机找10个坐标，把雷放进去)
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷(只排查9-9范围里面的)
	//把排查出来的信息从mine数组传到show数组
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();  //扫雷游戏
			printf("扫雷\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	}while (input);
	system("pause");
	return EXIT_SUCCESS;
}

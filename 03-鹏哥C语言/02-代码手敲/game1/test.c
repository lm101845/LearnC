//2022年11月25日08:06:36

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("*******    1.play    *******\n");
	printf("*******    0.exit    *******\n");
	printf("****************************\n");

}

void game()
{
	//游戏后台需要存储数据(使用二维数组存-char型数组就行)
	char board[ROW][COL];
	//初始化棋牌——初始化为空格
	InitBoard(board, ROW, COL);
	//打印一下棋盘——本质是打印数组的内容
	DisplayBoard(board,ROW,COL);

	char ret = 0;   //接收游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else 
	{
		printf("平局");
	}
	DisplayBoard(board, ROW, COL);
}

//我不是特别懂这个棋盘到底是怎么画出来的
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入下棋的坐标:>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			//玩家输入(1,1),就表示数组里面的(0,0)
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
				//下完棋之后一定要记得break，因为一个人只能下一次棋
			}
			else
			{
				printf("坐标被占用，请重新输入");
			}
		}
		else {
			printf("坐标非法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		//模谁就能取到谁(取模永远小于被除数)
		//判断占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;   //棋盘没满
			}
		}
	}
	return 1;   //棋盘满了
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[i][1] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//判断对角线(2条)
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局(棋盘满了就平局)
	//如果棋盘满了，返回1,；不满，返回0
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}

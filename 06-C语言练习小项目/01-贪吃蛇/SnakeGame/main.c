//2023年4月27日22:23:22
#define _CRT_SECURE_NO_WARNINGS
#include "snake.h"   //引入自定义头文件

int main()
{
	srand(time(NULL));   //播种随机数种子
	//srand(time(NULL));是C语言中用于生成伪随机数的函数，其中time(NULL)是用于获取当前时间的函数，
	// 返回的是从1970年1月1日到现在的秒数。srand函数的作用是根据传入的参数（即time(NULL)返回的值）
	// 来初始化随机数生成器的种子，
	//使得每次运行程序时生成的随机数序列都不同。这样可以增加随机数的随机性，避免生成相同的随机数序列。

	initSnake();    //初始化蛇
	initFood();     //初始化食物
	initUI();       //画蛇和食物
	//printf("snake 头：x=%d, y=%d\n", snake.body[0].X, snake.body[0].Y);
	//printf("snake 身：x=%d, y=%d\n", snake.body[1].X, snake.body[1].Y);

	//printf("food：x=%d, y=%d\n", food.X, food.Y);
	system("pause");
	return EXIT_SUCCESS;
}



//定义初始化蛇函数
void initSnake(void)
{
	snake.size = 2;  //刚开始一个蛇头，一截身子

	//蛇头初始化
	snake.body[0].X = WIDE / 2;
	snake.body[0].Y = HIGH / 2;

	//蛇的一截身体初始化
	snake.body[1].X = WIDE / 2 - 1;
	snake.body[1].Y = HIGH / 2;
	return;
}

//初始化界面控件
void initUI(void)
{
	COORD coord = { 0 };   //光标移动的位置,默认2个成员变量都为0
	//画蛇
	for (size_t i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y;
		//printf("x=%d, y=%d\n", coord.X, coord.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
			putchar('@');  //putchar函数用于向标准输出流（通常是屏幕）输出一个字符。
		else
			putchar('*');
	}
	//画食物
	coord.X = food.X;
	coord.Y = food.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	//将光标默认位置移动至不干扰游戏的任意位置
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//定义初始化食物函数
void initFood(void)
{
	food.X = rand() % WIDE;   //0-59
	food.Y = rand() % HIGH;   //0-19
	return;
}


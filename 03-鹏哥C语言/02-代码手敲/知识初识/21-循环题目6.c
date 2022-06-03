//2022年6月3日23:45:30

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
	//猜数字游戏的实现
	//1. 生成随机数
	//rand函数返回了一个0-32767之间的数字——但这个数字不是随机的(还需要调用一个随机生成器)
	//时间 - 时间戳
	//srand(100);
	//srand((unsigned int)time(NULL));
	//这个随机数起点的设置，只需要调用一次就行了，放到main函数里面去
	int ret = rand() % 100 + 1;   //%100的余数是0-99(余数总是比被除数小)，然后+1，范围就是1-100
	//printf("%d\n", ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	//猜数字游戏
	//1. 自动产生一个1-100之间的随机数
	//2. 猜数字
	//  a. 猜对了，就恭喜你，游戏结束
	//  b. 你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
	//3. 游戏可以一直玩，除非退出游戏

	//使用do...while循环最好了，因为至少玩一次游戏
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();  //打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
	system("pause");
	return EXIT_SUCCESS;
}

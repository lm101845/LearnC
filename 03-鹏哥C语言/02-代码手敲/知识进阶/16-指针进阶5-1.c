//2023年2月13日10:48:38
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("**************************\n");
	printf("**** 1. add    2. sub ****\n");
	printf("**** 3. mul    4. div ****\n");
	printf("****     0. exit      ****\n");
	printf("**************************\n");
}
int main()
{
	int input = 0;
	//计算器-计算整型变量的加、减、乘、除
	//a&b a^b a|b a>>b a<<b a>b
	do {
		menu();
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
			/**
			* 定义一个函数指针的数组
			* pfArr[4]是一个指向函数指针数组，每一个元素都是一个函数指针，
			  每一个函数指针都指向一个包含两个int参数并且返回值也是一个int的
			  函数。
			  这样的一个数组我们也把它称为转义表(C和指针)
			*/
			printf("请输入2个操作数");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret=%d\n", ret);
			/*switch (input)
			{
			case 1:
				printf("请输入2个操作数>:");
				scanf("%d %d", &x, &y);
				ret = Add(x, y);
				printf("ret = %d\n", ret);
				break;
			case 2:
				printf("请输入2个操作数>:");
				scanf("%d %d", &x, &y);
				ret = Sub(x, y);
				printf("ret = %d\n", ret);
				break;
			case 3:
				printf("请输入2个操作数>:");
				scanf("%d %d", &x, &y);
				ret = Mul(x, y);
				printf("ret = %d\n", ret);
				break;
			case 4:
				printf("请输入2个操作数>:");
				scanf("%d %d", &x, &y);
				ret = Div(x, y);
				printf("ret = %d\n", ret);
				break;
			case 0:
				printf("退出程序\n");
				break;
			default:
				printf("选择错误，重新选择!\n");
				break;
			}
		} */
		}
		else if (input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else {
			printf("选择错误");
		}

	} while (input);
	system("pause");
	return EXIT_SUCCESS;
}

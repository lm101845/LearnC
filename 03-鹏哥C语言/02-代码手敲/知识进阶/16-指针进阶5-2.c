//2023年2月13日11:33:24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int arr[10];
//数组元素类型——int(去掉数组名+元素个数)
//数组本身也有类型——int[10]

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

int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入2个操作数>:");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	int input = 0;
	//计算器-计算整型变量的加、减、乘、除
	//a&b a^b a|b a>>b a<<b a>b

	do {
		menu();

		int ret = 0;
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);//
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);//
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}

	} while (input);
	system("pause");
	return EXIT_SUCCESS;
}

//2023��2��13��11:33:24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int arr[10];
//����Ԫ�����͡���int(ȥ��������+Ԫ�ظ���)
//���鱾��Ҳ�����͡���int[10]

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
	printf("������2��������>:");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	int input = 0;
	//������-�������ͱ����ļӡ������ˡ���
	//a&b a^b a|b a>>b a<<b a>b

	do {
		menu();

		int ret = 0;
		printf("��ѡ��:>");
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
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}

	} while (input);
	system("pause");
	return EXIT_SUCCESS;
}

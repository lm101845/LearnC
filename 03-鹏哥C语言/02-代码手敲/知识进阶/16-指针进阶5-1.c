//2023��2��13��10:48:38
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
	//������-�������ͱ����ļӡ������ˡ���
	//a&b a^b a|b a>>b a<<b a>b
	do {
		menu();
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
			/**
			* ����һ������ָ�������
			* pfArr[4]��һ��ָ����ָ�����飬ÿһ��Ԫ�ض���һ������ָ�룬
			  ÿһ������ָ�붼ָ��һ����������int�������ҷ���ֵҲ��һ��int��
			  ������
			  ������һ����������Ҳ������Ϊת���(C��ָ��)
			*/
			printf("������2��������");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret=%d\n", ret);
			/*switch (input)
			{
			case 1:
				printf("������2��������>:");
				scanf("%d %d", &x, &y);
				ret = Add(x, y);
				printf("ret = %d\n", ret);
				break;
			case 2:
				printf("������2��������>:");
				scanf("%d %d", &x, &y);
				ret = Sub(x, y);
				printf("ret = %d\n", ret);
				break;
			case 3:
				printf("������2��������>:");
				scanf("%d %d", &x, &y);
				ret = Mul(x, y);
				printf("ret = %d\n", ret);
				break;
			case 4:
				printf("������2��������>:");
				scanf("%d %d", &x, &y);
				ret = Div(x, y);
				printf("ret = %d\n", ret);
				break;
			case 0:
				printf("�˳�����\n");
				break;
			default:
				printf("ѡ���������ѡ��!\n");
				break;
			}
		} */
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else {
			printf("ѡ�����");
		}

	} while (input);
	system("pause");
	return EXIT_SUCCESS;
}

//2023��4��27��22:23:22
#define _CRT_SECURE_NO_WARNINGS
#include "snake.h"   //�����Զ���ͷ�ļ�

int main()
{
	srand(time(NULL));   //�������������
	//srand(time(NULL));��C��������������α������ĺ���������time(NULL)�����ڻ�ȡ��ǰʱ��ĺ�����
	// ���ص��Ǵ�1970��1��1�յ����ڵ�������srand�����������Ǹ��ݴ���Ĳ�������time(NULL)���ص�ֵ��
	// ����ʼ������������������ӣ�
	//ʹ��ÿ�����г���ʱ���ɵ���������ж���ͬ�������������������������ԣ�����������ͬ����������С�

	initSnake();    //��ʼ����
	initFood();     //��ʼ��ʳ��
	initUI();       //���ߺ�ʳ��
	//printf("snake ͷ��x=%d, y=%d\n", snake.body[0].X, snake.body[0].Y);
	//printf("snake ��x=%d, y=%d\n", snake.body[1].X, snake.body[1].Y);

	//printf("food��x=%d, y=%d\n", food.X, food.Y);
	system("pause");
	return EXIT_SUCCESS;
}



//�����ʼ���ߺ���
void initSnake(void)
{
	snake.size = 2;  //�տ�ʼһ����ͷ��һ������

	//��ͷ��ʼ��
	snake.body[0].X = WIDE / 2;
	snake.body[0].Y = HIGH / 2;

	//�ߵ�һ�������ʼ��
	snake.body[1].X = WIDE / 2 - 1;
	snake.body[1].Y = HIGH / 2;
	return;
}

//��ʼ������ؼ�
void initUI(void)
{
	COORD coord = { 0 };   //����ƶ���λ��,Ĭ��2����Ա������Ϊ0
	//����
	for (size_t i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y;
		//printf("x=%d, y=%d\n", coord.X, coord.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
			putchar('@');  //putchar�����������׼�������ͨ������Ļ�����һ���ַ���
		else
			putchar('*');
	}
	//��ʳ��
	coord.X = food.X;
	coord.Y = food.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	//�����Ĭ��λ���ƶ�����������Ϸ������λ��
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//�����ʼ��ʳ�ﺯ��
void initFood(void)
{
	food.X = rand() % WIDE;   //0-59
	food.Y = rand() % HIGH;   //0-19
	return;
}


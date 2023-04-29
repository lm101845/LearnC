#ifndef __SNAKE_H__
//ifndef _SNAKE_H_ ��ʾ���û�ж���� _SNAKE_H_�����������Ĵ��룬��������������Ϊ�˱���ͷ�ļ����ظ�������
#define __SNAKE_H__ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

#define WIDE 60   //���
#define HIGH 20   //�߶�

//һ������Ķ���
struct BODY {
	int X;
	int Y;
};


//�����߶���
struct  SNAKE {
	struct BODY body[WIDE * HIGH];    //һ���������ɸ�body���
	int size;
}snake;   //һ���߶���


//����ʳ�����
struct FOOD {
	int X;
	int Y;
} food;  //һ��ʳ����� 

int score = 0;  //����

//��������(��main�����ں�������ǰ���ʱ����Ҫ����һ�£���Ȼmain��������ʶ)
void initSnake(void);
void initFood(void);
void initUI(void);
#endif

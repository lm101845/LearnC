#ifndef __SNAKE_H__
//ifndef _SNAKE_H_ 表示如果没有定义宏 _SNAKE_H_，则编译下面的代码，否则跳过。这是为了避免头文件被重复包含。
#define __SNAKE_H__ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

#define WIDE 60   //宽度
#define HIGH 20   //高度

//一个身体的对象
struct BODY {
	int X;
	int Y;
};


//定义蛇对象
struct  SNAKE {
	struct BODY body[WIDE * HIGH];    //一个蛇由若干个body组成
	int size;
}snake;   //一个蛇对象


//定义食物对象
struct FOOD {
	int X;
	int Y;
} food;  //一个食物对象 

int score = 0;  //分数

//声明函数(当main函数在函数定义前面的时候，需要声明一下，不然main函数不认识)
void initSnake(void);
void initFood(void);
void initUI(void);
#endif

/*************************************************************************************
 * 文 件 名:   转义字符.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/1 16:23
*************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//printf("hello\n");
	//printf("abc\rdef");  //r将输出光标到行首(行首的abc就被def给覆盖掉了)
	//printf("\\");
	//printf("abc\tdef\n");   //水平制表符
	//printf("123456789");
	//printf("\a");    //警报
	printf("%%");	   //百分号
	system("pause");
	return EXIT_SUCCESS;
}

/*************************************************************************************
 * 文 件 名:   数据类型_整型.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/23 16:21
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//数据类型_ 整型
//short(2B) int(4B) long(window系统下为4B,Linux系统下32位操作系统为4B,64位操作系统为8B) long long(8B)

void test01()
{

	//short num1 = 10;  //短整型(-2^15-2^15-1) (-32768-32767)  -0因为没有意义(0只用+0表示，-0废物利用，用来表示-32768 )，所以计算机将其表示为-32768
	//short num1 = -32768;  
	//short num1 = 32768;
	short num1 = 327688;  //报错
	int num2 = 10;    //整型(-2^31-2^31-1) (2，147,483,648，2，147,483,647)  21亿多
	long num3 = 10;		//长整型(windows系统下：-2^31-2^31-1)
	long long num4 = 10;	//长长整型(-2^63-2^63-1)
	printf("num1 = %hd\n", num1);  //短整型用的占位符是hd
	printf("num2 = %d\n", num2);	//整型用的占位符是d
	printf("num3 = %ld\n", num3);  //长整型用的占位符是ld
	printf("num4 = %lld\n", num4); //长长整型用的占位符是lld
}
int main()
{
	test01(); 
	system("pause");
	return EXIT_SUCCESS;
}

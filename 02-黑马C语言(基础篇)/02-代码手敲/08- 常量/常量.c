/*************************************************************************************
 * 文 件 名:   常量.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/23 15:47
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//常量
//程序运行期间不可以修改的值

#define DAY 7

void test01()
{
	//1.数值常量 100 200 300(整数型常量) 3.14 1.1 2.2(实数型常量)
	// 100 = 200;

	//2.字符常量 'a' 'b' 'c' '\n'  '\\'

	//3.字符串常量
	//"hello world" = "aaa"

	//单引号引起来的是字符，双引号引起来的是字符串

	//4.符号常量(宏常量)
	printf("一周一共有%d天\n", DAY);
	//DAY = 14;  Error 不可以修改常量

	//5.const修饰的变量
	const int month = 12;
	printf("一年一共有%d个月\n", month);
	//const 修饰后，month也属于常量了
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
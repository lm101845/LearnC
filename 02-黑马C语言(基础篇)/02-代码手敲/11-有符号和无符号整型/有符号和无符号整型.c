/*************************************************************************************
 * 文 件 名:   有符号和无符号的整型.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/23 16:56
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//有符号和无符号 常量
void test01()
{
	//有符号的int类型的常量
	printf("%d\n", 10);

	//无符号的int类型的常量
	printf("%d\n", 10U);

	//有符号的long类型的常量
	printf("%ld\n", 10L);

	//无符号的long类型的常量
	printf("%lu\n", 10UL);
}

//有符号和无符号的变量
void test02()
{
	//定义有符号的变量——默认加了关键字signed(你不写也默认加的)
	signed int a = 100;
	printf("%d\n",a);

	//定义无符号的变量——手动添加关键字——unsigned
	unsigned int a2 = 102;
	printf("%u\n",a2);
}
int main()
{
	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

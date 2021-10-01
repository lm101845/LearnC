/*************************************************************************************
 * 文 件 名:   C4996错误警告处理.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/1 14:48
*************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
//上面这一行可以解决C4996的问题——解决方式1

//#pragma warning(disable:4996)
//上面这一行可以解决C4996的问题——解决方式2
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	//在VS中不建议用一些传统的C语言库函数,比如scanf、sprintf等，会报出C4996错误
	//解决方式1：引用宏 #define _CRT_SECURE_NO_WARNINGS
	//解决方式2：#pragma warning(disable:4996)
	//解决方式3：项目右键——属性(alt+enter)——预处理器——预处理器定义——编辑——将_CRT_SECURE_NO_WARNINGS复制到最下面即可
	//最常用的是解决方式1
	char buf[1024] = { 0 };
	//这个叫字符数组，你先不用管它
	sprintf(buf, "%s", "hello world");
	printf("%s", buf);
	system("pause");
	return 0;
} 
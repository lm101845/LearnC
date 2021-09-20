/*************************************************************************************
 * 文 件 名:   快捷键.c
 * 创 建 者：  liming
 * 创建时间：  2021/9/20 20:36
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//F9：添加/取消断点
//F11:逐语句
//F10:逐过程
//Shift+F11:跳出
void test01() 
{
	printf("hello world1\n");
	printf("hello world2\n");
	printf("hello world3\n");
	printf("hello world4\n");
	printf("hello world5\n");
	//\n就是一个换行符号
}

int main()
{
	printf("第1个项目\n");
	test01();
	printf("第1个项目\n");
	system("pause");
	return 0;
}
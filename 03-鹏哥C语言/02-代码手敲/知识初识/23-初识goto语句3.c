//2022年6月4日13:33:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//关机程序——哈哈，这个挺好玩的
	//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机!
	//
	//shutdown -s -t 60
	//shutdown -a
	//关机
	//C语言提供了一个函数：system()- 执行系统命令的

	//goto 语句只能在一个函数范围内跳转，不能跨函数
	
	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 60");//system - stdlib.h

again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	//string.h
	if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	system("pause");
	return EXIT_SUCCESS;
}

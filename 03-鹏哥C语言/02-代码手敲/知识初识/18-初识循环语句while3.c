//2022年6月3日14:21:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char password[20] = { 0 };
	//C语言中没有字符串这种数据类型，只有字符数组。
	//C++中既包括C语言的字符数组（C风格字符串），也有C++引入的string类型（‘s’小写）。
	//Java中，有String类型（‘S’大写），String类型不属于8大基本类型。
	printf("请输入密码：>");
	scanf("%s", password);
	//这里的password前面没有加取地址，因为password本来是一个数组，数组的数组名就是数组第一个元素的地址
	printf("请确认密码(Y/N):>");
	//清理缓冲区(当前缓冲区里面有\n，要把它去掉)

	//getchar();   //先调用这个方法可以把\n给拿走——但这样不好
	//如果你密码写的是123 456，scanf只会拿空格前面的字符，又会报错，比较坑

	//这种写法更好：清理缓冲区中的多个字符
	int tmp = 0;
	while (tmp = getchar() != '\n')   //读取一个字符，就放到tmp里面去
	{
		;  //只写一个分号表示空语句，什么也不做
	}
	int ch = getchar();
	//为什么getchar读取的是一个字符，返回的确实一个整型呢？
	// 原因1：getchar读取的是字符，而字符本质上以ASCII码(整型数字或EOF)形式来存储
	// 
	//getchar和scanf都属于输入函数，他们是从哪里获取数据的呢？是直接从键盘上拿的吗？
	//不是的，它是从中间的缓冲区拿数据，如果缓冲区没有数据，它就会等待你在键盘输入一些数据到缓冲区中去
	//你敲了123456后回车，就会把123456\n放到缓冲区中去
	//而scanf拿数据，只会拿123456，不会拿\n。
	//然后请确认密码，这个时候会发现缓冲区里面还有个\n，会把这个\n当成你确认的输入

	if (ch == 'Y' || ch == 'y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}

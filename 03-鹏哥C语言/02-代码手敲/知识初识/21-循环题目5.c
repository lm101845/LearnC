//2022年6月3日23:22:56

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//题目：密码最多允许输入错误3次，超过3次不让输入了
	int i = 0;
	//假设正确的密码是字符串"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password); 
		//if (password == "123456") 
		//err 2个字符串比较，不能使用==,应该使用strcmp
		if(strcmp(password,"123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}

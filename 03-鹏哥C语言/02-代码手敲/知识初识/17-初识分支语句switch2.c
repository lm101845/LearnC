//2022年6月3日 12:32:17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int day = 0;
	scanf("%d", &day);
	/*
		JS中的switch
		虽然 switch 语句是从其他语言借鉴过来的，但 ECMAScript 为它赋予了一些独有的特性。首先，
switch 语句可以用于所有数据类型（在很多语言中，它只能用于数值），因此可以使用字符串甚至对象。
其次，条件的值不需要是常量，也可以是变量或表达式。
	*/
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	//为避免不必要的条件判断，最好给每个条件后面都加上 break 语句。
	
	//default关键字用于在任何条件都没有满足时指定默认执行的语句（相当于 else 语句）。
	default:
		printf("输入错误\n");
		break;
	}

	system("pause");
	return EXIT_SUCCESS;
}

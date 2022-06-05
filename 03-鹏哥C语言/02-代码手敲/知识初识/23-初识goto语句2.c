//2022年6月4日13:27:50

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func_1()
{
	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d\n",i);
	}
}

void func_2()
{
	int i = 0;
	goto flag1;

flag2:
	
	i++;

flag1:
	if(i < 10)
	{
		printf("%d\n", i);
		goto flag2;
	}
}


int main()
{
	func_1();
	printf("下面是goto实现的一模一样的效果");
	func_2();
	system("pause");
	return EXIT_SUCCESS;
}

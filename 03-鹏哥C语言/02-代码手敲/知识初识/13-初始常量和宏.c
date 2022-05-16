//2022年5月16日15:25:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//define是一个预处理指令
	//1.define定义常量
	#define MAX 1000   //这个后面不能写分号！！！
	printf("%d\n", MAX);


	//2.define定义宏
#define ADD(X,Y) X+Y
#define JIA(X,Y) ((X)+(Y))
	printf("%d\n", ADD(2, 3));  //5
	printf("%d\n", 4 * ADD(2, 3));  //不是20！是11！等价于4*2+3=11
	printf("%d\n", 4 * JIA(2,3));  //20
	system("pause");
	return EXIT_SUCCESS;
}

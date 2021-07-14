/*
12-09-18 20:27
一定要明白该程序为何会编译出错 

*/


#include <stdio.h>

int main(void)
{
double delta=0;

if (delta>0)
	printf("有2个解！\n");
	printf("哈哈！\n");
else if (delta==0)
	printf("有一个唯一解！\n");
	
else
	printf("无解！\n");
	
system("pause");
return 0;
}



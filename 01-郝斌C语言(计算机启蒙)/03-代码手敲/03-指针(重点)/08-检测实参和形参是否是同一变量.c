/**
	2021年12月12日 
*/
#include <stdio.h>

void f(int i)
{
	i = 99;
} 

//int f(int i)
//{
//	//i = 99;
//	return i;
//	//实参和形参永远是不同的变量 
//} 

int main(void)
{
	int i = 6;
	printf("i = %d\n",i);
	
	f(i);
	//函数是一个工具，一旦这个函数执行完毕，为这个函数分配的静态空间都会被释放掉 
	printf("i = %d\n",i);
	//2个i都是6，f函数中的i的值没有返回 
	
	//f(4); 
	//printf("i = %d\n",i);
	return 0;
} 

/*
指针就是地址 
指针也是一种数据类型，是专门存放地址的数据类型
俗称的指针，是指地址，而不是指针变量
指针是个常量，指针变量是个变量，二者是不同的概念
指针变量在使用前，必须指向具体的，有效的内存单元 
*/

#include <stdio.h>

int main(void)
{
	int *p;		//p是变量的名字，int *表示p变量存放的是int 类型变量的地址 
	int i=3;
	
	p=&i;		//ok
	//p=i;		//error,因为类型不一致，p只能存放int类型变量的地址，不能存放int类型变量的值
	//p=55;		//error原因同上 

printf("\n");

system("pause");
return 0;
}



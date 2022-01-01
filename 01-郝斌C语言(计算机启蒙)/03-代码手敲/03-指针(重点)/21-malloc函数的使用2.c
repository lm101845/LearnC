/**
	2022年1月1日 
*/

#include<stdio.h>
#include <malloc.h>

void f(int* q)
{
	//我想通过f函数修改*p的值 
	//*p = 200;    //error  因为f内部根本就没有p变量,p就只能在main函数内部使用 
	//q = 200;       //也不对,因为q是个int类型的指针,q里面只能存放int类型变量的地址,200不是一个整型变量的地址 
	//**q = 200;
	//q存放的是这4个字节的地址,所以*q就代表这4个字节,就代表这整型变量,而整型变量是不能加*的(只有指针变量才能加*) 
	*q = 200; 
	//free(q);   //把q所指向的内存释放掉,而q指向的是这4个字节,将这4个字节给释放掉,则下面的printf就不能写*p了,这个程序不能这么写 
}
 
int main(void)
{
	int* p = (int*)malloc(sizeof(int));  //sizeof返回值是int所占的字节数
	*p = 10;
	printf("%d\n",*p);  //10
	f(p);  
	//p是int*类型
	//我们把p的值发送给了q,q的值和p的值是一模一样的,就是q是p的一份拷贝(副本)  
	printf("%d\n",*p);  //200
	return 	0; 
}

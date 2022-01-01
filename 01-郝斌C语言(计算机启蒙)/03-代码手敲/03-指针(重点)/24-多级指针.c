/**
	2022年1月1日 
*/

//总结:多级指针是为了跨函数使用内存而存在
 
#include <stdio.h>

void f(int** q)
{
	//*q就是p 
	printf("f函数里面的数:%d\n",**q);
}
void g()
{
	int i = 10;
	int* p = &i;
	f(&p);   //p是int*类型 ,&p就变成了int**类型 
}
int main(void)
{
	int i = 10;
	int* p = &i;
	//严格来说p不是一个指针,p是一个指针变量,它既然是一个变量,它肯定也有地址
	int** q = &p;
	//q要存放p类型变量的地址,p类型是int* 
	int*** r = &q; 
	//r要存放q类型变量的地址,q类型是int** 
	
	//***r === i
	
	//r = &p;  
	//error 因为r是int***类型,r只能存放int**类型变量的地址
	
	printf("i = %d\n",***r); 
	
	g(); 
	return 0;
}

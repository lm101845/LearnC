/**
	2021年12月12日 
*/
#include <stdio.h>

int f(int i ,int j)
{
	//如果不用指针，可以修改2个数的值吗？？？？ 
	return 100;
	//return 88; 
	//一个程序里面即使有100个return，最终只能执行一个 ，然后程序就终止了 
} 

void g(int* p,int* q)
{
	*p = 1;
	*q = 2;
} 
int main(void)
{
	int a = 3,b = 5;
	a = f(a,b); 
	b = f(a,b); 
	//可以通过返回值修改，但是一次只能修改一个值 
	
	//如果不发送地址，形参是永远无法改变实参a,b的值的
	//但你又想改变实参的值，又不想用地址，就只能通过返回值来进行改变了 
	printf("a=%d,b=%d\n",a,b); 
	
	g(&a,&b); 
	//此时的a和p不是一个变量，不过p变量保存了a变量的地址。
	//把a的地址发送给p，p就指向了a，但p和a是不同的变量。
	//但既然p指向了a，*p就是a 
	printf("a=%d,b=%d\n",a,b); 
	
} 

/**
2021年11月28日 
*/


#include <iostream>
using namespace std;

int add(int a,int b)
{
	return a + b;
} 

int minu(int a,int b)
{
	return a + b;
} 

int main()
{
	int (*p)(int,int);
	//p就是指向函数指针的名字 
//	(int ,int)表示p指向的函数有2个参数，这2个参数都是int类型 
	char op = '+';
	if(op == '+')
		p = add;
		//指针可以指向一个函数！！！！ 
	else
		p = minu;
	cout<<p(3,4)<<endl;
	//我们是通过p指针来调用的 
	return 0; 
} 

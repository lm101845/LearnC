/**
	2022年4月4日 
*/
#include <iostream>
using namespace std;
int add(int a,int b)
{
	return a + b;
}
int minu(int a,int b)
{
	return a - b;
}

int main()
{
	int(*p)(int,int);
	//int表示我们定义的这个指针，所指向的函数返回值是int型 
	char op = '+';
	if(op == '+')
		p = add;
		//关键，指针可以指向一个函数！ 
	else
		p = minu;
	cout<<p(3,4)<<endl;
	//通过p指针来调用这个函数 
	//同一个指针可以指向不同的函数 
	return 0;
}

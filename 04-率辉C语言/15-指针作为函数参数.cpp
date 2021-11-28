/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

void f(int *a)
//定义一个指针变量 
{
	*a = 10;
	//这个指针变量的地址对应的值是10 
} 

int main()
{
	int a = 0;
	//在主函数中a最初是0，经过f函数，将它修改成了10 
	//折旧达到了通过函数来修改变量的值的目的了 
	f(&a);
	cout<<a<<endl;
	return 0; 
} 


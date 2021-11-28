/**
2021年11月28日 
*/

#include <iostream>

using namespace std;

void f()
{
	int a = 10;
} 

int main()

{
	int a = 0;
	f();
	//在函数体内定义的声明周期，只是存在于函数调用这一段 
	//函数执行完之后它就没了，死了 
	cout<<a<<endl ;
	return 0;
} 
 

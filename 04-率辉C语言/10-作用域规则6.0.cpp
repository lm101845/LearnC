/**
2021年11月28日 
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	{
		a = 0;
//		int a = 0;
		//这里内部的赋值语句对外部的赋值语句产生了影响 
		//即内部的语句块是可以操作外部的变量的 
		//总结：外部看不到内部，而内部可以看到外部 
	} 
	cout<<a<<endl;  //0 
	return 0;
} 

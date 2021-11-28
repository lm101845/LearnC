/**
2021年11月28日 
*/
#include <iostream>
using namespace std;

int main()
{
	{
		int a = 10;
		//a的作用域仅仅限于这个语句块内，在外面就看不到它了 
	} 
	cout<<a<<endl;
	//报错：[Error] 'a' was not declared in this scope 
	return 0;
} 

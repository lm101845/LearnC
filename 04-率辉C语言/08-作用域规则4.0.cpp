/**
2021Äê11ÔÂ28ÈÕ 
*/
#include <iostream>
using namespace std;

int a = 10;
void f()
{
	int a = 5;
	cout<<a<<endl;
} 

int main()
{
	cout<<a<<endl;
	f();
	return 0;  
} 

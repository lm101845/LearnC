/**
	2021年11月28日 
*/
#include <iostream>
using namespace std;

int add(int a,int b)
{
	int c = a + b;
	return c;
} 

int main()
{
	cout<<add(1,2);  //注意：后面没写<<endl表示后面就不换行了 
	return 0;
} 

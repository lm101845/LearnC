/**
2021��11��28�� 
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

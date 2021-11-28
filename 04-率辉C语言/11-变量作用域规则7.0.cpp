/**
2021Äê11ÔÂ28ÈÕ 
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	{
		int a = 0;
		cout<<"inside:"<<a<<endl; 
	} 
	cout<<"outside:"<< a << endl;
	return 0;
} 

/**
2021年11月28日 
*/

//指针必须要初始化，不初始化的话是非常危险的 
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 10;
	int *a_ = &a;
	int *b_ = &b;
	cout<<a_<<endl;
	cout<<b_<<endl;
	++(*a_);
	cout<<a<<endl;   //11
	return 0;
} 

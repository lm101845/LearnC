/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p[10] = {a,a+1,a+2,a+3,a+4,a+5,a+6,a+7,a+8,a+9};
	//第一个元素初始化为了a，表示p的第一个元素中保存的是数组a的第一个元素的地址 
	for(int i = 0; i < 10; i++)
	{
		cout<<*p[i]<<" "; 
	} 
	cout<<endl;
	return 0;
} 

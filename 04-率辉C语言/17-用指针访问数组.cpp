/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int *p = a;
	//定义了一个整型指针p，它的值却被初始化为了a数组的名字 
	//把a数组的名字放在这里，就等效于把第一个元素的地址放在这里 
	//而数组中的元素在内存中是连续排放的，它们占据了数组中的连续的存储空间，那显然它们的地址也是连续的 
	
	for(int i = 0; i < 10; i++)
		cout<<*(p+i)<<" ";
	cout<<endl;
	return 0; 
} 

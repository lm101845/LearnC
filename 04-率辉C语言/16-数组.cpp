/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

int main()
{
	int a[10] = {0};
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
		//输出数据的同时，还输出了一个空格  
	cout<<endl;
	//多组数据，最后输出了一个换行 
	
	int b[10] = {1};
	//这样写就表示第一个元素为1，其他元素没有给，默认是0 
//	cout<<b[0]<<" "; 
//	cout<<b[1]<<" "; 
//	cout<<b[2]<<" "; 
	for(int i = 0; i < 10; i++)
		cout<<b[i]<<" "; 
	cout<<endl;
	
	
	int c[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0; i < 10; i++)
		cout<<c[i]<<" ";
	cout<<endl;
	
	return 0; 
} 

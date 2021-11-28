/**
2021年11月28日 
*/
#include<iostream>

using namespace std;

void f()
{
	for(int i = 1; i <=5; i++)
	{
		if( i == 3)  return;    //最终结果是 1 ，2 ！！！！后面的就不再执行了！！！for循环也不执行了！！！ 
		cout<<i<<endl;
	} 
} 

int main()
{
	f();
	return 0; 
} 

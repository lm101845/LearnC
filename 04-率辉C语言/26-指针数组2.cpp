/**
	2022年4月4日 
*/
#include <iostream>
using namespace std;
//void arrayFun(int a[],int n)
void arrayFun(int *a,int n)
//这样也是可以的 
//当数组作为函数参数的时候，我们在定义这个参数的时候，是不需要给它加尺寸的 
{
	for(int i = 0; i < n; ++i)
		++a[i];
	for(int i = 0; i < n; ++i)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	arrayFun(a,10); 
	return 0;
}

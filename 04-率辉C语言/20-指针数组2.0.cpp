/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

//void arrayFun(int a[],int n)
void arrayFun(int *a,int n)
//这样写也是可以的 
//在数组作为函数参数的时候，我们在定义的时候，是不需要给它加尺寸的，这样定义的话，你给它传入任何尺寸的数组都是可以的 
{
	for(int i = 0; i < n; i++)
		++a[i];
		//给每个数组里面的元素都+1 
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
} 

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	arrayFun(a,10);
	//通过这个函数，对我们的数组值进行了修改 
	//这里a是数组的名字，就是数组第一个元素的地址 
	return 0; 
} 

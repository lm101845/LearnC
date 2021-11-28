/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

//void increase(int X)
void increase(int &X)
{
	for(int i = 1; i <= 5; i++)
	++X; 
} 

int main()
{
	int a = 0;
	increase(a);
	//这样写知识把a的值复制了一份给了X，随后对X进行了自增5次的操作，对a没有影响，所以a仍为0 
	//但是如果写成int &X，就不一样了，就代表把X定义成了引用类型，这样我们传入a的时候，a就会取代X的位置 
	//你可以理解成，函数在执行的时候，把所有的X都换成了a进行操作，即对a施加了对X相同的操作 
	//如果对一个参数定义为了一个引用型，那么这个参数(这里是a)就必须要是变量，不能是常量。
	cout<<a;
	return 0; 
} 

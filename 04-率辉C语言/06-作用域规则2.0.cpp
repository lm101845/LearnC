/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

//void f(int &a)
//只有把参数a改成引用型，才能改变 
void f(int a)
{
	a = 10;
} 

int main()
{
	int a = 0;
	f(a);
	//函数中这个参数a的作用域仅局限于函数内部 
	//即便是把外部这个a(int a = 0)，也仅仅是传递进去了它的值0，把0赋值给了f内部的那个a，也就是参数a,改变的是参数的值 
	//在函数执行完成之后，上面那个参数a的生命周期就结束了，不会对函数外部的a的输出有任何影响，还是0
	cout<<a<<endl; 
	return 0;
} 

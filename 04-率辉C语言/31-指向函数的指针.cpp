/**
	2022��4��4�� 
*/
#include <iostream>
using namespace std;
int add(int a,int b)
{
	return a + b;
}
int minu(int a,int b)
{
	return a - b;
}

int main()
{
	int(*p)(int,int);
	//int��ʾ���Ƕ�������ָ�룬��ָ��ĺ�������ֵ��int�� 
	char op = '+';
	if(op == '+')
		p = add;
		//�ؼ���ָ�����ָ��һ�������� 
	else
		p = minu;
	cout<<p(3,4)<<endl;
	//ͨ��pָ��������������� 
	//ͬһ��ָ�����ָ��ͬ�ĺ��� 
	return 0;
}

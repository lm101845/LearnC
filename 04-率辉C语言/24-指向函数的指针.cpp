/**
2021��11��28�� 
*/


#include <iostream>
using namespace std;

int add(int a,int b)
{
	return a + b;
} 

int minu(int a,int b)
{
	return a + b;
} 

int main()
{
	int (*p)(int,int);
	//p����ָ����ָ������� 
//	(int ,int)��ʾpָ��ĺ�����2����������2����������int���� 
	char op = '+';
	if(op == '+')
		p = add;
		//ָ�����ָ��һ�������������� 
	else
		p = minu;
	cout<<p(3,4)<<endl;
	//������ͨ��pָ�������õ� 
	return 0; 
} 

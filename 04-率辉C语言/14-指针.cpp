/**
2021��11��28�� 
*/

//ָ�����Ҫ��ʼ��������ʼ���Ļ��Ƿǳ�Σ�յ� 
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 10;
	int *a_ = &a;
	int *b_ = &b;
	cout<<a_<<endl;
	cout<<b_<<endl;
	++(*a_);
	cout<<a<<endl;   //11
	return 0;
} 

/**
2021��11��28�� 
*/
#include<iostream>

using namespace std;

void f()
{
	for(int i = 1; i <=5; i++)
	{
		if( i == 3)  return;    //���ս���� 1 ��2 ������������ľͲ���ִ���ˣ�����forѭ��Ҳ��ִ���ˣ����� 
		cout<<i<<endl;
	} 
} 

int main()
{
	f();
	return 0; 
} 

/**
2021��11��28�� 
*/

#include <iostream>
using namespace std;

void f(int *a)
//����һ��ָ����� 
{
	*a = 10;
	//���ָ������ĵ�ַ��Ӧ��ֵ��10 
} 

int main()
{
	int a = 0;
	//����������a�����0������f�����������޸ĳ���10 
	//�۾ɴﵽ��ͨ���������޸ı�����ֵ��Ŀ���� 
	f(&a);
	cout<<a<<endl;
	return 0; 
} 


/**
2021��11��28�� 
*/

#include <iostream>
using namespace std;

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p[10] = {a,a+1,a+2,a+3,a+4,a+5,a+6,a+7,a+8,a+9};
	//��һ��Ԫ�س�ʼ��Ϊ��a����ʾp�ĵ�һ��Ԫ���б����������a�ĵ�һ��Ԫ�صĵ�ַ 
	for(int i = 0; i < 10; i++)
	{
		cout<<*p[i]<<" "; 
	} 
	cout<<endl;
	return 0;
} 

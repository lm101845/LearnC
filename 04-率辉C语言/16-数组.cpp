/**
2021��11��28�� 
*/

#include <iostream>
using namespace std;

int main()
{
	int a[10] = {0};
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
		//������ݵ�ͬʱ���������һ���ո�  
	cout<<endl;
	//�������ݣ���������һ������ 
	
	int b[10] = {1};
	//����д�ͱ�ʾ��һ��Ԫ��Ϊ1������Ԫ��û�и���Ĭ����0 
//	cout<<b[0]<<" "; 
//	cout<<b[1]<<" "; 
//	cout<<b[2]<<" "; 
	for(int i = 0; i < 10; i++)
		cout<<b[i]<<" "; 
	cout<<endl;
	
	
	int c[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0; i < 10; i++)
		cout<<c[i]<<" ";
	cout<<endl;
	
	return 0; 
} 

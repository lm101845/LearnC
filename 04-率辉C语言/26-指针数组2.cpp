/**
	2022��4��4�� 
*/
#include <iostream>
using namespace std;
//void arrayFun(int a[],int n)
void arrayFun(int *a,int n)
//����Ҳ�ǿ��Ե� 
//��������Ϊ����������ʱ�������ڶ������������ʱ���ǲ���Ҫ�����ӳߴ�� 
{
	for(int i = 0; i < n; ++i)
		++a[i];
	for(int i = 0; i < n; ++i)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	arrayFun(a,10); 
	return 0;
}

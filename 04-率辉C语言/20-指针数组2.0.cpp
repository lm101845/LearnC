/**
2021��11��28�� 
*/

#include <iostream>
using namespace std;

//void arrayFun(int a[],int n)
void arrayFun(int *a,int n)
//����дҲ�ǿ��Ե� 
//��������Ϊ����������ʱ�������ڶ����ʱ���ǲ���Ҫ�����ӳߴ�ģ���������Ļ�������������κγߴ�����鶼�ǿ��Ե� 
{
	for(int i = 0; i < n; i++)
		++a[i];
		//��ÿ�����������Ԫ�ض�+1 
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
} 

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	arrayFun(a,10);
	//ͨ����������������ǵ�����ֵ�������޸� 
	//����a����������֣����������һ��Ԫ�صĵ�ַ 
	return 0; 
} 

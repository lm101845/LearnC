/**
2021��11��28�� 
*/

#include <iostream>
using namespace std;

int main()
{
	char *s1 = "I am a string";
	char s2[] = "I am a string too"; 
//	*s1 = 'S';
	*s2 = 'S';
	//����˵��s1��ָ����Ǹ����ǲ��ܹ��޸ĵģ���һ��������ֻ�ܶ�������д 
	//���ַ������飬���е�Ԫ���ǿ��������޸ĵ� 
	cout<<s1<<endl;
	cout<<s2<<endl;
	return 0; 
} 

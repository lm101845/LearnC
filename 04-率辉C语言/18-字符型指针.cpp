/**
2021年11月28日 
*/

#include <iostream>
using namespace std;

int main()
{
	char *s1 = "I am a string";
	char s2[] = "I am a string too"; 
//	*s1 = 'S';
	*s2 = 'S';
	//报错：说明s1所指向的那个串是不能够修改的，是一个常量，只能读，不能写 
	//而字符型数组，其中的元素是可以随意修改的 
	cout<<s1<<endl;
	cout<<s2<<endl;
	return 0; 
} 

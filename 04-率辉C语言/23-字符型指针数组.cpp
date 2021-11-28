/**
2021年11月28日 
*/


#include <iostream>
using namespace std;

int main()
{
	char *s2D[] = {
	//中括号里什么也没写，让系统自动的给它安排长度 
					"I",
					"am",
					"a",
					"string"	
				  };
	for(int i = 0; i < 4; i++)
	{
		cout<<s2D[i]<<endl;
	} 
	return 0;
} 

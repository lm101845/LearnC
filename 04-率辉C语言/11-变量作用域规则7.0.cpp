/**
2021��11��28�� 
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	{
		int a = 0;
		cout<<"inside:"<<a<<endl; 
	} 
	cout<<"outside:"<< a << endl;
	return 0;
} 

/**
2021��11��28�� 
*/
#include <iostream>
using namespace std;

void r()
{
	static int i = 0;
	if(i < 2)
	{
		i++;
		r();
		r(); 
	} 
} 


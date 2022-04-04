/**
	2022Äê4ÔÂ4ÈÕ 
*/
#include <iostream>
using namespace std;
void array2D(char *s2D[])
{
	for(int i = 0; i < 4; ++i)
	{
		cout<<s2D[i]<<endl;
	}
}


int main()
{
	char *s2D[] = {
				"I",
				"am",
				"a",
				"string",
				};
	array2D(s2D);
	return 0;
} 

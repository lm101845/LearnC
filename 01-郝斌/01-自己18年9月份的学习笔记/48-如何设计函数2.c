/*

用一个函数判断一个数字是否是素数  
*/

#include <stdio.h>

bool IsPrime (int m)
{
	int i;
	
	for (i=2; i<m; ++i)
	{
		if(0 == m%i)
			break;
	}
	if(i== m)
		return true;
	else
		return false;
}

int main(void)
{
	int val;
	int i;
	
	scanf("%d", &val);
	for (i=2; i<=val; ++i)
	{
		if (IsPrime(i))
		printf(%d/n,i);
	}


	system("pause");
	return 0;
}



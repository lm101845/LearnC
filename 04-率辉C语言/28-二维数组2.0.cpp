/**
	2022��4��4�� 
*/
#include <iostream>
using namespace std;
void array2D(int a[][3],int n)
//���Ǹ��˶�ά���ȣ���û�и���һά����  
{
	for(int i = 0 ; i < n; ++i)
	{
		for(int j = 0 ; j < 3; ++j)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
}

int main()
{
	int b[4][3] = {
					{1,2,3},
					{4,5,6},
					{7,8,9},
					{10,11,12},
				  };
	array2D(b,4);
	return 0;
} 

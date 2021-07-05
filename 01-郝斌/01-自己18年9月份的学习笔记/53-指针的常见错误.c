/*


*/

#include <stdio.h>

int main(void)
{
	int* p;
	int* q;
	int i = 5;
	
	//*p = i;
	p = &i;
	//*q = p;		*q是int类型，p是int*类型，型号不一致会报错
	//*q = *p; 		照样有错误，因为*没有给它赋值 
	printf("%d\n",*p);

system("pause");
return 0;
}



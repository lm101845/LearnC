/*


*/

#include <stdio.h>

int main(void)
{
	int *pInt = NULL;
	printf("指针变量pInt自己的地址是：OX%x\n",&pInt);
	
	int para = 1;
	printf("变量para自己的地址是：OX%x\n",&para);
	printf("变量para自己的值是：OX%x\n",para);
		
	
	pInt = &para;
	printf("指针变量pInt自己的值是：OX%x\n",pInt);
	printf("指针变量pInt的他值是：OX%x\n",*pInt);
	
	int arr_int[2] = {1,2};
	pInt = arr_int;
	printf("arr_int第一个元素是arr_int[0]的地址是：0X%x\n");
	printf("arr_int第二个元素是arr_int[1]的地址是：0X%x\n");
	
	double *pDouble = NULL;
	double arr_double[2] = {1.1,2.2};
	pDouble = arr_double;
	printf("arr_double的第一个元素arr_double[0]的地址是：OX%x\n",pDouble);
	printf("arr_double的第二个元素arr_double[1]的地址是：OX%x\n",pDouble+ 1);
	 


system("pause");
return 0;
}



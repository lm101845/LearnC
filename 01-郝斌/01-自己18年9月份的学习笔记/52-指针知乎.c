/*


*/

#include <stdio.h>

int main(void)
{
	int *pInt = NULL;
	printf("ָ�����pInt�Լ��ĵ�ַ�ǣ�OX%x\n",&pInt);
	
	int para = 1;
	printf("����para�Լ��ĵ�ַ�ǣ�OX%x\n",&para);
	printf("����para�Լ���ֵ�ǣ�OX%x\n",para);
		
	
	pInt = &para;
	printf("ָ�����pInt�Լ���ֵ�ǣ�OX%x\n",pInt);
	printf("ָ�����pInt����ֵ�ǣ�OX%x\n",*pInt);
	
	int arr_int[2] = {1,2};
	pInt = arr_int;
	printf("arr_int��һ��Ԫ����arr_int[0]�ĵ�ַ�ǣ�0X%x\n");
	printf("arr_int�ڶ���Ԫ����arr_int[1]�ĵ�ַ�ǣ�0X%x\n");
	
	double *pDouble = NULL;
	double arr_double[2] = {1.1,2.2};
	pDouble = arr_double;
	printf("arr_double�ĵ�һ��Ԫ��arr_double[0]�ĵ�ַ�ǣ�OX%x\n",pDouble);
	printf("arr_double�ĵڶ���Ԫ��arr_double[1]�ĵ�ַ�ǣ�OX%x\n",pDouble+ 1);
	 


system("pause");
return 0;
}



//2023��2��1��14:06:42

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void populate_array(int* array, size_t arraySize, int (*getNextValue)(void))
//size_t ���Ͷ�����cstddefͷ�ļ��У����ļ���C��׼���ͷ�ļ�stddef.h��C++�档
//����һ���������ص�unsigned���ͣ����С���Ա�֤�洢�ڴ��ж���Ĵ�С��

/**
 ʵ���� populate_array() �����������������������е����������Ǻ�����ָ�룬
 ͨ���ú��������������ֵ��

 ʵ�������Ƕ����˻ص����� getNextRandomValue()��������һ�����ֵ��
 ����Ϊһ������ָ�봫�ݸ� populate_array() ������

 populate_array() ������ 10 �λص������������ص������ķ���ֵ��ֵ�����顣
*/
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

// ��ȡ���ֵ
int getNextRandomValue(void)
{
    return rand();
}

int main()
{
    int myarray[10];
    /* getNextRandomValue ���ܼ����ţ������޷����룬��Ϊ��������֮���൱�ڴ���˲���ʱ������ int , �����Ǻ���ָ��*/
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

/*************************************************************************************
 * �� �� ��:   sizeof�ؼ���.c
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2021/10/30 19:19
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//sizeof��������ͳ��һ����������һ������������������ռ�õ��ڴ�ռ�Ĵ�С
//�﷨�� sizeof(����/����)
void test01() 
{
	printf("int���͵Ĵ�СΪ%d���ֽ�\n", sizeof(int));
	printf("short���͵Ĵ�СΪ%d���ֽ�\n", sizeof(short));
	printf("long���͵Ĵ�СΪ%d���ֽ�\n", sizeof(long));
	printf("long long���͵Ĵ�СΪ%d���ֽ�\n", sizeof(long long));

	int a = 10;
	printf("aռ�õ��ڴ�Ĵ�СΪ%d���ֽ�\n", sizeof(a));

}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

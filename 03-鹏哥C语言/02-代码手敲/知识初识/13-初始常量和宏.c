//2022��5��16��15:25:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//define��һ��Ԥ����ָ��
	//1.define���峣��
	#define MAX 1000   //������治��д�ֺţ�����
	printf("%d\n", MAX);


	//2.define�����
#define ADD(X,Y) X+Y
#define JIA(X,Y) ((X)+(Y))
	printf("%d\n", ADD(2, 3));  //5
	printf("%d\n", 4 * ADD(2, 3));  //����20����11���ȼ���4*2+3=11
	printf("%d\n", 4 * JIA(2,3));  //20
	system("pause");
	return EXIT_SUCCESS;
}

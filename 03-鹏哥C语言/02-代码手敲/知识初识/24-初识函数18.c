//2022��6��25��16:04:13

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
//��n�Ľ׳ˡ�������������� 
int main()
{
	//����1��ѭ��
	//int n = 10;
	//scanf("%d", &n);
	//int i = 0;
	//int ret = 1;
	//for (i = 1; i <= n; i++) {
	//	ret = ret * i;
	//}
	//printf("%d\n", ret);


	//����2���ݹ�
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�
	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��4��11:09:34

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//if�����0��ʾ�٣���0��ʾ�棬1��ʾ�棬2Ҳ��ʾ�棡��
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			//��ֵ��䣬��5��ֵ��i�����ʽ�Ľ����Ϊ5,5Ϊ��
			//����i��ԶС��10��ѭ����Զ������ȥ
			printf("%d ", i);
	}

	system("pause");
	return EXIT_SUCCESS;
}

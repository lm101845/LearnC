//2022��6��3��16:08:17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* do-while �����һ�ֺ����ѭ����䣬��ѭ�����еĴ���ִ�к�Ż���˳�����������ֵ������
��˵��ѭ�����ڵĴ�������ִ��һ��

�����ѭ�����������������Σ�ѭ�����ڴ������˳�ǰ����Ҫִ��һ�Ρ�
*/
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
		{
			//i++;
			continue;
			//break;
		}
		printf("%d ", i);
		i++;
	} while (i <= 10);
	system("pause");
	return EXIT_SUCCESS;
}

//2022��6��3�� 13:41:19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//while (1) 
	// {
	//	printf("hehe\n");
	//}

	//while (10) 
	// {
	//	printf("hehe\n");
	//}

	//while (0) 
	//{
	//	printf("hehe\n");
	//}

	int i = 0;
	//��whileѭ���У�break�������õ���ֹѭ��
	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ���
	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
	while (i <= 10) 
	{
		if (i == 5) 
		{
			//break;
			continue;
			//ѡ��continue֮�󣬴�ӡ��0 1 2 3 4֮���껹��������û����������ѭ����
		}
		printf("%d ", i);
		i++;
	}
	system("pause");
	return EXIT_SUCCESS;
}

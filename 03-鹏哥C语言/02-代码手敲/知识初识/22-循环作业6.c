//2022��6��4��11:38:54

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	////���������������������������Լ��
	////��������Լ�����д�ķ����������ǿ��Եģ��ٺ٣�
	//int a = 0;
	//int b = 0;
	//int limit = 0;
	//int ret = 0;
	//scanf("%d%d", &a, &b);
	//limit = a > b ? b : a;
	//for (int i = 1; i <= limit; i++)
	//{
	//	if (a % i == 0 && b % i == 0)
	//	{
	//		ret = i;
	//	}
	//}
	//printf("���Լ��Ϊ%d\n", ret);

	//��ʦд��1��������ʦд�����ã����Ǵ�С�����ҵģ�ѭ������Ҫȫ����ɲ����ҵ�
	//int m = 0;
	//int n = 0;
	//scanf("%d%d", &m, &n);//24 18
	//int max = 0;
	////�������Լ��max����m��n�Ľ�Сֵ
	//if (m > n)
	//	max = n;
	//else
	//	max = m;

	//while (1)
	//{
	//	if (m % max == 0 && n % max == 0)
	//	{
	//		printf("���Լ�����ǣ�%d\n", max);
	//		break;
	//	}
	//	max--;
	//}

	//��ʦд��2��շת���������������ѧ���ͦ��Ҫ��
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);//24 18
	int t = 0;

	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("���Լ����%d\n", n);

	//��С������ = m*n/���Լ��;
	system("pause");
	return EXIT_SUCCESS;
}

/*************************************************************************************
 * �� �� ��:   �����в���.c
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2021/10/1 15:44
*************************************************************************************/

//�����в����õ��ĵط����࣬�˽⼴�ɡ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//argc �����б�������
//argv �����в���
int main(int argc,char *argv[])
{
	printf("�����б�����������%d\n",argc);
	//����ҵ��������1�����ֱ�����е�����������Ļ��
	if (argc > 1)
	{
		int i = 0;
		for (i = 0; i < argc; i++) 
		{
			printf("%s\n", argv[i]);
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}

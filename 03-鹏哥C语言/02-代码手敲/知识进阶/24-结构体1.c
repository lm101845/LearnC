//2023��2��24��10:47:33

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//һ��ṹ���ʽ���£�
//struct tag
//{
//	member-list
//} varible-list;


//�ṹ��д��1��
//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//};

//�ṹ��д��2��
struct Book
{
	char name[20];
	int price;
	char id[12];
}b4,b5,b6;
//b4,b5,b6�Ǵ����Ľṹ�����
//b1.b2,b3��b4,b5,b6������һ���ģ��������Ǵ��������Ľṹ����ı���
//��һ���ĵط���b1,b2,b3�Ǿֲ���������b4,b5,b6��ȫ�ֱ���(������main�����ڲ�������)

int main()
{
	int a;
	struct Book b1;
	struct Book b2;
	struct Book b3;
	//struct Book ���൱��int,����struct����ʡ
	system("pause");
	return EXIT_SUCCESS;
}

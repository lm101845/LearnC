//2023��2��24��11:04:37

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//�ṹ���������(�ṹ��������԰����ṹ��)
//ʵ��1��
//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};

//ʵ��2���ṹ��������Լ�������д���в��У����������У����ᵼ����ѭ��,�ڴ汬ը
//���⣺�ǽṹ���������ʵ���������أ�����������ʹ��ָ��
//struct Node {
//	int d;
//	struct Node n;
//};

//д��1������ʡ��tagд����������
struct Node
{
	int data;
	struct Node* next;
	//struct Node  ������   int
	//struct Node* �������� int*
	//��Ϊ��һ�����ݵ�ָ�룬�������ָ������;���struct Node*
	//����ͽнṹ���������(���ǰ���ͬ���ͱ��������ǰ���ͬ����ָ��)
	//����д������ʡ��tag(Node)
};

//д��2����������д��(ʡ����tag)���������ԣ�����
typedef struct
{
	int data;
	Node* next;  
	//���Node����Ҫ���У�������������ΪNode
	//�Ⱥ��ϵ��������Ҫ����Node*����ṹ���Ա��������������ΪNode����
	// ���Բ�����ôд
	//��������е��������м�������
} Node;


//д��3���������ԣ���
typedef struct Node
{
	int data;
	struct Node* next;
	//�����������Node1�ڽṹ���Ա�����ǲ���ֱ���õ�
	//һ�����ǰ�����µ�������ĺ�tag��һ��
}Node1;

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}

//2023��2��1��14:31:56

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
    //ͬʱ�������˽ṹ�����s1
    //����ṹ�岢û�б������ǩ
    struct
    {
        int a;
        char b;
        double c;
    } s1;

    //������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
    //�ṹ��ı�ǩ������ΪSIMPLE,û����������
    struct SIMPLE
    {
        int a;
        char b;
        double c;
    };
    //��SIMPLE��ǩ�Ľṹ�壬���������˱���t1��t2��t3
    struct SIMPLE t1, t2[20], * t3;

    //Ҳ������typedef����������
    typedef struct
    {
        int a;
        char b;
        double c;
    } Simple2;
    //���ڿ�����Simple2��Ϊ���������µĽṹ�����
    Simple2 u1, u2[20], * u3;

    //�ṹ��ĳ�Ա���԰��������ṹ�壬Ҳ���԰���ָ���Լ��ṹ�����͵�ָ�룬
    //��ͨ������ָ���Ӧ����Ϊ��ʵ��һЩ���߼������ݽṹ����������ȡ�
 
    //�˽ṹ������������������Ľṹ��
    struct COMPLEX
    {
        char string[100];
        struct SIMPLE a;
    };

    //�˽ṹ�������������ָ���Լ����͵�ָ��
    struct NODE
    {
        char string[100];
        struct NODE* next_node;
    };

    //��������ṹ�廥�����������Ҫ������һ���ṹ����в�����������������ʾ��
    struct B;    //�Խṹ��B���в���������

//�ṹ��A�а���ָ��ṹ��B��ָ��
    struct A
    {
        struct B* partner;
        //other members;
    };

    //�ṹ��B�а���ָ��ṹ��A��ָ�룬��A�������BҲ��֮��������
    struct B
    {
        struct A* partner;
        //other members;
    };
	system("pause");
	return EXIT_SUCCESS;
}

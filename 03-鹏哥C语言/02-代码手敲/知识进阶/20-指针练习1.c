//2023��2��18��19:11:59

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));		//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - �ǵ�һ�е�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));  //4/8 
//	//���ͣ�a[0]��Ϊ��������û�е�������sizeof�ڲ���
//	//Ҳûȡ��ַ,����a[0]���ǵ�һ�е�һ����ĵ�ַ
//	//a[0]+1,���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - ���ͣ�*(a[0] + 1)�ǵ�һ�еڶ���Ԫ��
//
//	printf("%d\n", sizeof(a + 1));//4/8 - ���ͣ�a�Ƕ�ά���������������û��ȡ��ַ
//	//Ҳû�е�������sizeof�ڲ�,����a�ͱ�ʾ��ά������Ԫ�صĵ�ַ��������һ�еĵ�ַ
//	//a + 1���Ƕ�ά����ڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16 ���ͣ�a+1�ǵڶ��еĵ�ַ������*��a+1����ʾ�ڶ���
//	//���Լ���ľ��ǵ�2�еĴ�С
//
//	printf("%d\n", sizeof(&a[0] + 1));//4 ���ͣ�a[0]�ǵ�һ�е���������
//	//&a[0]ȡ���ľ��ǵ�һ�еĵ�ַ,&a[0]+1 ���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//&a[0]+1 ���ǵڶ��еĵ�ַ
//	//*(&a[0]+1) ���ǵڶ��У����Լ���ĵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*a));//16 ���ͣ�a��Ϊ��ά�������������û��&��û�е�������sizeof�ڲ�
//	//a������Ԫ�صĵ�ַ������һ�еĵ�ַ������*a���ǵ�һ�У�������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[3]));//16 ���ͣ�a[3]��ʵ�ǵ����е�������������еĻ���
//	//������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С��
//	printf("%d\n", sizeof(a[-1]));
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));
//	//2(a�����ͣ���ţ�ƣ�6Ҳ�����ͣ���Ҳţ�ƣ��������Ҫ�ѽ��������s(short����)���棬�Բ����Ǿ�����s˵������)
//	//���Խ����short���ͣ���2���ֽ�
//	//���ң�sizeof�ڲ��ı��ʽ�ǲ����������ģ�����
//	printf("%d\n", s);//5
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//	system("pause");
//	return EXIT_SUCCESS;
//}


//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;
////����p ��ֵΪ0x100000�� ���±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�

int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);  //p��ǿ������ת��Ϊ�����ˣ�����+1����+1
	printf("%p\n", (unsigned int*)p + 0x1);  //p��ǿ������ת��Ϊ�޷�������ָ�룬+1�ӵ���4
	system("pause");
	return EXIT_SUCCESS;
}
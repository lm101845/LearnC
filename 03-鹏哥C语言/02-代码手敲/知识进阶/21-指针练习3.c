//2023��2��21��11:09:10

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char* a[] = { "work","at","alibaba" };  //ָ�����飬����ÿ��Ԫ�ض���ָ��
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return EXIT_SUCCESS;
//}

//c������% c��ʽ����ʾ��������ַ� ��% s��ʽ����ʾ��������ַ�����

int main()
{
	//https://blog.csdn.net/SickAgaric/article/details/90486492
	//����char* c[] ��һ��ָ�����飬�������ŵ�ָ�룬ÿ��ָ�붼��ָ��һ���ַ���
	//charcp[] ͬ��Ҳ��ָ�����飬�������ŵ�ָ�룬��ָ������c[]
	//char** cpp ��һ������ָ�룬��ָ���������cp
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);   //POINT
	printf("%s\n", *-- * ++cpp + 3);  //ER
	printf("%s\n", *cpp[-2] + 3);  //ST
	printf("%s\n", cpp[-1][-1] + 1);  //EW  �൱��*(*(cpp-1)) + 1
	system("pause");
	return EXIT_SUCCESS;
}

//char* c[] = { "ENTER","NEW","POINT","FIRST" };
//����4���ַ���������ĵ�ַ�ŵ�c��������ȥ�ˣ�ÿ��Ԫ�ض���char*
//char** cp[] = { c + 3,c + 2,c + 1,c };
//��c�����Ԫ�ص�ַ�ŵ�cp��������ȥ�ˣ�ÿ��Ԫ�ض���char**
//char*** cpp = cp;
//��cp�����Ԫ�ص�ַ�ŵ�cpp����ȥ�ˣ�cpp��char***

//printf("%s\n", **++cpp);   //POINT
//��++cpp��ָ��cp[1]��Ҳ����c[2]��Ȼ��**cpp��ȡ��c[2]��ֵ��Ҳ����POINT

//printf("%s\n", *-- * ++cpp + 3);  //ER
//��++cpp��ָ��cp[1]��Ҳ����c[2]��Ȼ��*--*cpp��ȡ��c[1]��ֵ��Ҳ����NEW��Ȼ��+3��ȡ��NEW�ĵ�3���ַ���Ҳ����ER

//printf("%s\n", *cpp[-2] + 3);  //ST
//cpp[-2]��ָ��cp[-2]��Ҳ����c[0]��Ȼ��*cpp[-2]��ȡ��c[0]��ֵ��Ҳ����ENTER��Ȼ��+3��ȡ��ENTER�ĵ�3���ַ���Ҳ����ST

//printf("%s\n", cpp[-1][-1] + 1);  //EW
//cpp[-1]��ָ��cp[-1]��Ҳ����c[-1]��Ȼ��cpp[-1][-1]��ȡ��c[-1]��ֵ��Ҳ����FIRST��Ȼ��+1��ȡ��FIRST�ĵ�1���ַ���Ҳ����EW

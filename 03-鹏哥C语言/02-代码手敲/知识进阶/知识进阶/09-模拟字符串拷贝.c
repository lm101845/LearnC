//2023��1��27��11:55:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//����д�Ĳ���
//void my_strcpy(char * dest,char * src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//�޸İ�1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//�޸İ�2
void my_strcpy(char* dest, const char* src)
//����const�Ժ�����㿽��д���ˣ����붼����벻��ȥ
//const�ǳ�����
{
	assert(src != NULL);  //����
	assert(dest != NULL);  //����
	while (*dest++ = *src++)
	{
		;  //hello�Ŀ���
	}
}

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	//�����������arr2��������ݿ�����arr1����ȥ
	//strcpy(arr1, arr2);
	my_strcpy(arr1, arr2);
	//my_strcpy(arr1, NULL);  //Ŀ��ռ����ʼ��ַ Դ�ռ����ʼ��ַ
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//����1��
	//int num = 10;
	//int* p = &num;
	//*p = 20;

	//����2��
	//const���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��Ǳ���
	const int num = 10;
	//��num����const,���ǿ���ͨ��ָ������޸�����ֵ
	//const����ָ�������ʱ��
	//���������*����ߣ����ε���*p����ʾָ��ָ�������(����)���ǲ���ͨ��ָ��ı��
	//���������*���ұߣ����ε���ָ�����p,��ʾָ��������ܱ��ı䣬����ָ��ָ������ݿ��Ա��ı�
	const int* p = &num;
	//�ٸ�ָ��pǰ�����const�����ʱͨ��ָ��Ҳ�Ĳ�����(*p = 20�ᱨ��)����ȫ��
	//*p = 20;

	//��Ȼ*p���ܸģ�����p�ǿ��Ըĵģ���
	int n = 100;
	p = &n;
	//����д�ǿ��Եģ�������©��������
	printf("%d\n", num);
	printf("%d\n", *p);
	system("pause");
	return EXIT_SUCCESS;
}

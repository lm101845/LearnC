//2022��4��27��22:08:04
/*
* �ַ����Ľ�����־��һ�� \0 ��ת���ַ���
  �ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ�������

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//printf("c:\test\test.c");
	//printf("ab\ncd");
	//printf("(are you ok??)");  //����ĸ�ʡ���  ??)ת��Ϊ]��������û����ʾ����
	//printf("%c\n", '\'');
	//printf("%s\n", "abc");
	//printf("%s\n","\"");
	//printf("\a\a\a");  //���Ի���һ��
	printf("%c\n", '\130');  //����һ��ת���ַ��������õ����Ű�����
	// \ddd ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
	// \xdd dd��ʾ2��ʮ���������֡� �磺 \x30 0
	printf("%d\n", '\101');
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\628\test.c"));  //14
	//printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ
	system("pause");
	return EXIT_SUCCESS;
};

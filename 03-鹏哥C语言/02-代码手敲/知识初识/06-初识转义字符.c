//2022年4月27日22:08:04
/*
* 字符串的结束标志是一个 \0 的转义字符。
  在计算字符串长度的时候 \0 是结束标志，不算作字符串内容

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//printf("c:\test\test.c");
	//printf("ab\ncd");
	//printf("(are you ok??)");  //三字母词——  ??)转换为]，但这里没有显示出来
	//printf("%c\n", '\'');
	//printf("%s\n", "abc");
	//printf("%s\n","\"");
	//printf("\a\a\a");  //电脑会响一下
	printf("%c\n", '\130');  //这是一个转义字符，所以用单引号包起来
	// \ddd ddd表示1~3个八进制的数字。 如： \130 X
	// \xdd dd表示2个十六进制数字。 如： \x30 0
	printf("%d\n", '\101');
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\628\test.c"));  //14
	//printf在打印数据的时候，可以指定打印的格式
	system("pause");
	return EXIT_SUCCESS;
};

//2022年6月3日14:05:54

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int ch = 0;
	//ctrl+z - getchar 就读取结束

	//getchar
	//int test = getchar();
	//printf("%c\n", test);
	//EOF - end of file - 文件结束标志
	while ((ch = getchar()) != EOF)
		//getchar获取一个字符放到ch里面去
		//当getchar获取字符失败情况下，会返回EOF
		//getchar是获取字符的，它是不会忽略\n——回车的
	{
		putchar(ch);
		//puchar函数用于字符打印
	}

	system("pause");
	return EXIT_SUCCESS;
}

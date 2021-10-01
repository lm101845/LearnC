/*************************************************************************************
 * 文 件 名:   命令行参数.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/1 15:44
*************************************************************************************/

//命令行参数用到的地方不多，了解即可。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//argc 命令行变量数量
//argv 命令行参数
int main(int argc,char *argv[])
{
	printf("命令行变量的数量：%d\n",argc);
	//如果我的命令大于1条，分别把所有的命令都输出到屏幕中
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

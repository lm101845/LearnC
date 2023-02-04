//2023年2月1日14:56:04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	union Data data;

	data.i = 10;
	data.f = 220.5;
	strcpy(data.str, "C Programming");

	printf("data.i : %d\n", data.i);
	printf("data.f : %f\n", data.f);
	printf("data.str : %s\n", data.str);
	//在这里，我们可以看到共用体的 i 和 f 成员的值有损坏，
	//因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因。现在让我们再来看一个相同的实例，这次我们在同一时间只使用一个变量，这也演示了使用共用体的主要目的：
	system("pause");
	return EXIT_SUCCESS;
}

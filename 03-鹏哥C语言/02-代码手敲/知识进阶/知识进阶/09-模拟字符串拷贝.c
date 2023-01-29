//2023年1月27日11:55:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//代码写的不好
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

//修改版1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//修改版2
void my_strcpy(char* dest, const char* src)
//加了const以后，如何你拷贝写反了，代码都会编译不过去
//const是常变量
{
	assert(src != NULL);  //断言
	assert(dest != NULL);  //断言
	while (*dest++ = *src++)
	{
		;  //hello的拷贝
	}
}

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	//现在我们想把arr2里面的内容拷贝到arr1里面去
	//strcpy(arr1, arr2);
	my_strcpy(arr1, arr2);
	//my_strcpy(arr1, NULL);  //目标空间的起始地址 源空间的起始地址
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//例子1：
	//int num = 10;
	//int* p = &num;
	//*p = 20;

	//例子2：
	//const修饰变量，这个变量就被称为常变量，不能被修改，但是本质上还是变量
	const int num = 10;
	//给num加上const,还是可以通过指针进行修改它的值
	//const修饰指针变量的时候，
	//如果它放在*的左边，修饰的是*p，表示指针指向的内容(数字)，是不能通过指针改变的
	//如果它放在*的右边，修饰的是指针变量p,表示指针变量不能被改变，但是指针指向的内容可以被改变
	const int* p = &num;
	//再给指针p前面加上const，则此时通过指针也改不了了(*p = 20会报错)，安全了
	//*p = 20;

	//虽然*p不能改，但是p是可以改的！！
	int n = 100;
	p = &n;
	//这样写是可以的，还是有漏洞啊！！
	printf("%d\n", num);
	printf("%d\n", *p);
	system("pause");
	return EXIT_SUCCESS;
}

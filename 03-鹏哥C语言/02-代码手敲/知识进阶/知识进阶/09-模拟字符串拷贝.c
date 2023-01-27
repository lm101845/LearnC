//2023年1月27日11:55:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxx";
	char arr2[] = "hello";
	//现在我们想把arr2里面的内容拷贝到arr1里面去
	//strcpy(arr1, arr2);
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	system("pause");
	return EXIT_SUCCESS;
}

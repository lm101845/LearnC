//2022年4月27日22:46:57

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整形数组，最多放10个元素
	char ch[5] = { 'a','b','c' };  //这个叫数组的不完全初始化，剩下的取默认值0
	printf(arr);
	printf(ch);
	system("pause");
	return EXIT_SUCCESS;
}

//2022年6月3日23:03:39

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	//题目：编写代码，演示多个字符从2端移动，向中间汇聚
	//welcome to bit!!!!!!
	//####################

	//w##################!
	//we################!!
	//wel##############!!!
	//...
	//welcome to bit!!!!!!

	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	//strlen和sizeof求字符串长度的区别
	//sizeof会将空字符\0计算在内，而strlen不会将空字符\0计算在内
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);	  //休眠1秒后再执行下面代码
		system("cls");   //清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	system("pause");
	return EXIT_SUCCESS;
}

//2023年2月23日22:22:09

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//三步反转法
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	//使用指针的时候，最好先断言一下 
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void string_left_rotate(char* str, int k)
{
	assert(str);
	int n = strlen(str);
	reverse(str, str+k-1);//左
	reverse(str+k, str+n-1);//右
	reverse(str, str+n-1);//整体
}

int main()
{
	char arr[10] = "ABCDEF";
	int k = 4;
	string_left_rotate(arr, k);
	printf("%s\n", arr);
	system("pause");
	return EXIT_SUCCESS;
}

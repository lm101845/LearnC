//2023年2月5日16:20:38

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

//题目1：
//int i;//i是全局变量，不初始化，默认是0
//int main()
//{
//    i--;//-1
//    //sizeof这个操作符，算出的结果的类型是unsigned int
//    printf("%d\n", i--);        //-1
//    printf("%d\n", sizeof(i));  //4
//    if (i > sizeof(i))
//     //有符号整型和无符号整型比较大小的时候，会先将有符号整型转为无符号整型
//     //-1转为无符号数，是一个超级大的正数 > 4
//    {
//        printf(">\n");  //这个！！
//    }
//    else
//    {
//        printf("<\n");
//    }
//    system("pause");
//    return EXIT_SUCCESS;
//}

//题目2：
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	//由a组成前n项之和 - 不考虑溢出
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;  //一项
//	for (i = 0; i < n; i++)
//	{
//		//算出一项
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return EXIT_SUCCESS;
//}

//题目3： 
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//方法1：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0 1 2 3 4 5 6 7 8 9
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}

//方法2：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0 1 2 3 4 5 6 7 8 9
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + sz - 1; 
//	//pend指针指的是数组的最后一个元素
//	int i = 0;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}

//题目4：
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否会自幂数
//		//1. 计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2. 计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow是用来求次方数
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3. 判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}


//题目5：
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	system("pause");
//	return EXIT_SUCCESS;
//}


//题目6：
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    system("pause");
//    return EXIT_SUCCESS;
//}

//题目7：
//写一个函数，可以逆序一个字符串的内容
void reverse(char* str)
{
	//assert(str != NULL);  //先断言一下str不是空指针
	assert(str);  //简写

	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;

	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";//fedcba
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return EXIT_SUCCESS;
}

//int main()
//{
//	system("pause");
//	return EXIT_SUCCESS;
//}
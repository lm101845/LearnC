//2023��2��5��16:20:38

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

//��Ŀ1��
//int i;//i��ȫ�ֱ���������ʼ����Ĭ����0
//int main()
//{
//    i--;//-1
//    //sizeof���������������Ľ����������unsigned int
//    printf("%d\n", i--);        //-1
//    printf("%d\n", sizeof(i));  //4
//    if (i > sizeof(i))
//     //�з������ͺ��޷������ͱȽϴ�С��ʱ�򣬻��Ƚ��з�������תΪ�޷�������
//     //-1תΪ�޷���������һ������������� > 4
//    {
//        printf(">\n");  //�������
//    }
//    else
//    {
//        printf("<\n");
//    }
//    system("pause");
//    return EXIT_SUCCESS;
//}

//��Ŀ2��
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	//��a���ǰn��֮�� - ���������
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;  //һ��
//	for (i = 0; i < n; i++)
//	{
//		//���һ��
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return EXIT_SUCCESS;
//}

//��Ŀ3�� 
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//����1��
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

//����2��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0 1 2 3 4 5 6 7 8 9
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + sz - 1; 
//	//pendָ��ָ������������һ��Ԫ��
//	int i = 0;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}

//��Ŀ4��
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ��������
//		//1. ����i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2. ����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow��������η���
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3. �ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}


//��Ŀ5��
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


//��Ŀ6��
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

//��Ŀ7��
//дһ����������������һ���ַ���������
void reverse(char* str)
{
	//assert(str != NULL);  //�ȶ���һ��str���ǿ�ָ��
	assert(str);  //��д

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
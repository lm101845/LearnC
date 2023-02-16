//2023��2��16��18:15:03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stu
{
	char name[20];
	int age;
};

void Swap(char*buf1, char*buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
 
//ģ��qsortʵ��һ��ð�������ͨ���㷨
void bubble_sort(void* base, int sz,int width,int(*cmp)(const void *e1,const void *e2))
    //e1,e2��ֻ�ǱȽϣ�û�иı䣬��һ��const�Ƚϰ�ȫ
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�(�û��Լ�дһ���Ƚϵĺ���)
			if (cmp((char*)base + j * width,(char*) base + (j+1) * width ) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int sort_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void test1()
{
	//�������ݵ�����
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

void test2()
{
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };

	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}
int main()
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}

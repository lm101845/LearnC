//2022��6��3�� 12:40:59
//�����Ҿ�Ȼ�������ˣ�����Ƶ�Ŷ�������������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:m++;  //n 1  m 3
    case 2:n++;
    case 3:
        switch (n)
        //switch����Ƕ��ʹ��
        {
        case 1:
            n++;
        case 2:m++;n++;
            break;
        }
    case 4:
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);
	system("pause");
	return EXIT_SUCCESS;
}

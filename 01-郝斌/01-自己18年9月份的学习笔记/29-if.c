#include <stdio.h>
int main() 
{
    int sale=120; //����ҵ��Ϊ120��
    int year=1; //�ոս��빫˾1��
    if(sale>100)//���ƴ���
    {
        if(year>=2)
        {
        printf("%s","��ϲ��������Ա����");
        }
        else
        {
        printf("%s","���ź����������ٽ�����");
        }
    }
    else
    {
        printf("%s","���ź����������ٽ�����");
    }
    return 0;
}


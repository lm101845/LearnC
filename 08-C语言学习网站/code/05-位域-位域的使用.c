//2023��2��13��13:43:09

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    struct bs {
        unsigned a : 1;
        unsigned b : 3;
        unsigned c : 4;
    } bit, * pbit;
    bit.a = 1;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    bit.b = 7;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    bit.c = 15;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    printf("%d,%d,%d\n", bit.a, bit.b, bit.c);    /* ����������ʽ�������������� */
    pbit = &bit;    /* ��λ����� bit �ĵ�ַ�͸�ָ����� pbit */
    pbit->a = 0;    /* ��ָ�뷽ʽ��λ�� a ���¸�ֵ����Ϊ 0 */
    pbit->b &= 3;    /* ʹ���˸��ϵ�λ����� "&="���൱�ڣ�pbit->b=pbit->b&3��λ�� b ��ԭ��ֵΪ 7���� 3 ����λ������Ľ��Ϊ 3��111&011=011��ʮ����ֵΪ 3�� */
    pbit->c |= 1;    /* ʹ���˸���λ�����"|="���൱�ڣ�pbit->c=pbit->c|1������Ϊ 15 */
    printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);    /* ��ָ�뷽ʽ��������������ֵ */
	system("pause");
	return EXIT_SUCCESS;
}

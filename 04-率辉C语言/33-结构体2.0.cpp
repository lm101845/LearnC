/**
	2022��4��4�� 
*/
#include <iostream> 

//�ýṹ������ʾһ����

int main()
{
//	struct {int x; int y;} point;
//  point�����������̫����,���ǿ���ʹ��typedef�����������������һ������ 
//	typedef struct {int x; int y;} Point;     //����д��һ�и�ʽ������ 
	//���ṹ��struct {int x; int y;}������һ�����ֽ���Point
	//����ƽ����ѻ����ֵĲ���д��main���������棬������Ϊһ��ȫ�ֱ���
	//�������ǵĸ�ʽһ�㲻д��һ�У������������ܶ�
	typedef  struct 
	{
		int x;
		int y;	
	} Point;
	Point point;
	//point�ı������;ͽ���Point�� 
	point.x = 10;
	point.y = 11;
	//�ṹ���ڲ��ı���x,y���ǽ������� 
	printf("%d,%d",point.x,point.y);
	return 0;
} 

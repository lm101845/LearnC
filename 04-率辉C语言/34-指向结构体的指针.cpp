/**
	2022��4��4�� 
*/
#include <stdio.h>
typedef struct
{
	int x;
	int y;
} Point;

int main()
{
	Point point;
	Point *p;
	p = &point;
	p->x = 10;
	p->y = 11;
	printf("%d,%d",p->x,p->y);
	return 0; 
}

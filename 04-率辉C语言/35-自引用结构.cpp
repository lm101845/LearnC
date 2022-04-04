/**
	2022年4月4日 
*/
#include <stdio.h>
typedef struct Point
{
	int x;
	int y;
	struct Point* next; 
	//这种C和C++都通用 
} Point;

int main()
{
	Point p1,p2,p3,p4,p5;
	Point *p;
	p1.x = 1; p1.y = 0; 
	p2.x = 4; p2.y = 1; 
	p3.x = 2; p3.y = 4; 
	p4.x = 3; p4.y = 2; 
	p5.x = 1; p5.y = 6;
	
	p1.next = &p2;
	p2.next = &p3; 
	p3.next = &p4; 
	p4.next = &p5; 
	p5.next = NULL;
	//这个就是链表了吧 
	
	for(p = &p1; p != NULL; p = p->next)
		printf("(%d,%d)\n",p->x,p->y);
	return 0; 
}

#include <stdio.h>

int main(void)
{
	float score;		 //score����
	
	printf("���������Ŀ��Գɼ�:\n");
	scanf("%f", &score);		//֮ǰ����������Ϊ����������д�� scanf("%f, &score");  ����λ�ô���� 
	
	if(score > 100 )
		printf("�������Σ�\n");
		
	else if (score>=90 && score<=100)		//����д��90<=score<=100     &&�ǲ��ҵ���˼
		printf("���㣡\n");
		
	else if (score>=80 && score<90)
		printf("���ã�\n");	
		
	else if (score>=60 && score<80)
		printf("����\n");
		
	else if (score>=0 && score<60)
		printf("�����񣡼���Ŭ��!\n");
		
	else
		printf("������ķ������ͣ���Ҫ����Ա���\n");
	
	system("pause");
	return 0;
}

//Ϊʲô�����е�ʱ�����еĲ��԰������� 

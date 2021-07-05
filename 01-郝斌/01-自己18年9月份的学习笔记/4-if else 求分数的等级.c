#include <stdio.h>

int main(void)
{
	float score;		 //score分数
	
	printf("请输入您的考试成绩:\n");
	scanf("%f", &score);		//之前做错了是因为当初是这样写的 scanf("%f, &score");  引号位置打错了 
	
	if(score > 100 )
		printf("这是做梦！\n");
		
	else if (score>=90 && score<=100)		//不能写成90<=score<=100     &&是并且的意思
		printf("优秀！\n");
		
	else if (score>=80 && score<90)
		printf("良好！\n");	
		
	else if (score>=60 && score<80)
		printf("及格！\n");
		
	else if (score>=0 && score<60)
		printf("不及格！继续努力!\n");
		
	else
		printf("您输入的分数过低，不要如此自卑！\n");
	
	system("pause");
	return 0;
}

//为什么我运行的时候运行的不对啊？？？ 

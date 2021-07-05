# include <stdio.h>

int main (void)
{
    int x=47;     //47是十进制
    
    //printf（"%x\n", x）;     //输出结果是： 2f 
    //printf（"%X\n", x）;     //输出结果是： 2F
    printf（"%#X\n", x）;     //输出结果是： Ox2F    %#X推荐使用 
    //printf（"%#x\n", x）;     //输出结果是： Ox2f 
   
    return  0;
}







# include <stdio.h>

int main(void)
{
    if(3>2)
           printf("AAAA\n");
    if(3) 
    printf ("AAAA\n");       //会输出
    
    if(0)
    printf ("BBBB\n");       //不会输出
    
   // if（0==0）
    //printf（"CCCC\n");   //会输出 
     
    system("PAUSE");
    return 0;
   
}

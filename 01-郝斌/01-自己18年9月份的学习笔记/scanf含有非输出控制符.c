# include <stdio.h>
  
int main(void)
{
    int i;
    
    scanf("m%d",&i);    //m123是正确的输入，123是非法的输入 
    printf("i=%d\n",i);
    system("pause"); 
    
    return 0;
}

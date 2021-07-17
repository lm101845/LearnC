# include<stdio.h>

int main(void)
{
    int i=10;
    int k=20;
    int m;
    
    //m=(3>2)&&(k=8);          //真是用1表示，假是0表示； 
    m=(1>2)&&(k=5);        //c语言判断真假：非零是真，零是假 ；
                             //并且这个运算符，当左边是假的时候，右边就不执行了 
                             //不含有分号的是表达式，含有分号的是语句 
                            
    printf("m = %d,k = %d\n",m ,k);
    
    system("pause");
    return 0;
}

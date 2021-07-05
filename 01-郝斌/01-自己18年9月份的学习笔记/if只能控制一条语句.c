# include <stdio.h>

int main(void)
{
    if (1>2)
    printf("AAAA\n");
    printf("BBBB\n");
   
    system("PAUSE");
    return 0;
}
   
/*
总结：if默认的只能控制一个语句的执行或不执行（只能控制A的语句，不能控制B语句的执行） 
如果想控制多个语句的执行或不执行，就必须把这些语句用{}括起来 
*/

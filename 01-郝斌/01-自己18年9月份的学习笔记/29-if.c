#include <stdio.h>
int main() 
{
    int sale=120; //销售业绩为120万
    int year=1; //刚刚进入公司1年
    if(sale>100)//完善代码
    {
        if(year>=2)
        {
        printf("%s","恭喜你获得优秀员工！");
        }
        else
        {
        printf("%s","很遗憾，期望你再接再厉");
        }
    }
    else
    {
        printf("%s","很遗憾，期望你再接再厉");
    }
    return 0;
}


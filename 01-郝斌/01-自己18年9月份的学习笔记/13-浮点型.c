#include <stdio.h>

int main(void)
{


printf("\n");

system("pause");
return 0;
}

//有一个浮点型变量x,如何判断x的值是否为零
/* if|x-0.000001|<0.000001
   是
   else
   不是 */
//为什么循环中更新的变量不能定义成浮点型？-----因为浮点型是非准确存储 

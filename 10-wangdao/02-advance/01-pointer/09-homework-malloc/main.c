/**
 * @Author liming
 * @Date 2025/1/11 19:50
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;   //代表申请空间大小
    scanf("%d", &n);
    //清除缓存区里面的\n
    char c;
    scanf("%c", &c);   //清除标准输入缓冲区中的\n
    char *p;
    p = (char*)malloc(n);   //申请n个字节大小的空间，强制类型转换为char*
    gets(p);   //可以使用fgets(p,n,stdin);
    puts(p);
    return 0;
}

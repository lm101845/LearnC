/**
 * @Author liming
 * @Date 2025/1/4 18:18
 */

#include <stdio.h>
//输入N个数(N小于等于100)，输出数字2的出现次数
//输入格式:
//第一行输入一个整数N
//第二行输入N个数字，每个数字之间用空格隔开。
//输出格式:
//一行输出2出现的次数

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);  //循环读取多个整型元素
        if (arr[i] == 2) {
            count++;
        }
    }
    printf("count=%d\n",count);
    return 0;
}

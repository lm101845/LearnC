/**
 * @Author liming
 * @Date 2025/1/2 21:05
 */

#include <stdio.h>
//数组名传递到子函数后，子函数的形参接收到的不是数组，而是数组首元素的地址，因此不能把数组的长度传递给子函数
//void print(int a[]) {
void print(int a[],int length) {
    //此时sizeof(a)是8，因为a是int*(指针)类型，大小为8个字节(指针是8个字节)
//    for (int i = 0; i < sizeof(a) / sizeof(int); ++i) {
    for (int i = 0; i < length; ++i) {
        printf("%3d", a[i]);
    }
    printf("\n");
}
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    print(a,5);
    return 0;
}

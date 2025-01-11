/**
 * @Author liming
 * @Date 2025/1/11 19:44
 */

#include <stdio.h>
void change(int *j){
    *j = *j / 2;
}
int main() {
    int i;
    scanf("%d",&i);
    change(&i);
    printf("%d\n",i);
    return 0;
}

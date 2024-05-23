#include <stdio.h>

int main(void){
    int a, b, count, sum;
    scanf("%d%d", &a, &b);
    count = a;
    sum=0;
    while (count<=b) {
        sum=sum+(count*count);
        count++;
    }
    printf("%d \n", sum);
    return 0;
}

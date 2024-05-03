#include <stdio.h>

int main(void){
    int a, b, count;
    scanf("%d%d", &a, &b);
    count = a;
    while (count<=b) {
        printf("%d \n", count*count);
        count++;
    }
    return 0;
}

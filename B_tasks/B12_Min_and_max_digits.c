#include <stdio.h>

int main(void){
    int number, min, max, tmp;
    scanf("%d", &number);
    if (number==0) {
        printf("%d", number);
    return 0;
    }
    min = number % 10;
    max = number % 10;

    while (number>0) {
        tmp = number % 10;
        min = tmp < min ? tmp : min;
        max = tmp > max ? tmp : max;
        number/=10;
    }
    printf("%d %d", min, max);
    return 0;
}


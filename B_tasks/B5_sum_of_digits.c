#include <stdio.h>

int main(void){
    int number, sum;
    scanf("%d", &number);
    while (number > 0) {
        sum = sum + number % 10;
        number = number / 10;
    }
    printf("%d", sum);
    return 0;
}


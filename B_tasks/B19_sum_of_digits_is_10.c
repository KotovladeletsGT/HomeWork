#include <stdio.h>

int main(void){
    int number, digit, sum;
    sum = 0;
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        sum = sum + digit;
        number /= 10;
    }
    if (sum == 10) {
        printf("YES");
    } 
    else {
        printf("NO");
    }
    return 0;
}


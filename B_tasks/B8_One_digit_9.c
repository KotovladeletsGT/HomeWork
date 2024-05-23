#include <stdio.h>

int main(void){
    int number, digit, count;
    scanf("%d", &number);

    while (number>0) {
        digit = number % 10;
        if (digit == 9) {
            count++;
        }
        number /= 10;
    }
    if (count == 1) {
        printf("YES");
    } 
    else {
        printf("NO");
    }
    return 0;
}


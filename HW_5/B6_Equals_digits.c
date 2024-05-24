#include <stdio.h>

int main(void){
    int number, digit1, digit2, answer;
    answer=0;
    scanf("%d", &number);
    digit1 = number % 10;
    number = number / 10;
    while (number > 0) {
        digit2 = number % 10;
        if (digit1==digit2) {
            answer=1;
            break;
        }
        number=number/10;
        digit1=digit2;

    }

    if (answer) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}


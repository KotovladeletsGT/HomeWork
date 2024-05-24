#include <stdio.h>
int is_happy_number(int n) {

    int summ = 0, mult = 1, digit = 0;
    while (n>0) {
        digit = n % 10;
        summ += digit;
        mult *= digit;
        n /= 10;
    }
    if (mult==summ) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}


int main(void) {
    int n;
    scanf("%d",&n);
    is_happy_number(n);
    return 0;
}



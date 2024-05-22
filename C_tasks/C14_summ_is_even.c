#include <stdio.h>
int summ_is_even(int n) {

    int summ = 0, digit = 0;
    while (n>0) {
        digit = n % 10;
        summ += digit;
        n /= 10;
    }
    if (summ % 2) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}


int main(void) {
    int n;
    scanf("%d",&n);
    summ_is_even(n);
    return 0;
}



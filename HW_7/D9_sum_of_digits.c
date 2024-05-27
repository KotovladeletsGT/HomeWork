
#include <stdio.h>
int sum = 0;
int sum_digits(int n) {
    sum = sum + (n %  10);
    if (n > 0) {
        sum_digits(n / 10);
    }
    return  0;
}

int main(void) {
    int n;
    scanf("%d",&n);
    sum_digits(n);
    printf("%d ",sum);
    return 0;
}


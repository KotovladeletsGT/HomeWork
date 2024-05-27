#include <stdio.h>

int rev(int n) {
    int a;
    a = n % 10;
    n = n / 10;
    printf("%d ",a);
    if (n > 0) {
        rev(n);
    }
    return  0;
}

int main(void) {
    int n;
    scanf("%d",&n);
    rev(n);
    return 0;
}

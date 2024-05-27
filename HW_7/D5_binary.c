#include <stdio.h>

int binary(int num) {
    int a;
    a = num % 2;
    num = num / 2;

    if (num > 0) {
        binary(num);
    }
    printf("%d",a);
    return  0;
}

int main(void) {
    int num;
    scanf("%d",&num);
    binary(num);
    return 0;
}


#include <stdio.h>

int main(void) {

    int number, digit, tmp, mod;
    mod=0;
    scanf("%d",&number);
    tmp=number % 10;
    number=number/10;
    while (number>0) {
        digit = number % 10;
        if (digit<tmp) {
            tmp=digit;
            mod=1;
        }
        else {
            mod=0;
            break;
        }

        number /= 10;

    }
    if (mod || (number==0)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}


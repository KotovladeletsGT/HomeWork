
#include <stdio.h>


int main(void) {

    int number, digit, even, odd;
    even = 0;
    odd = 0;
    scanf("%d",&number);

    while (number>0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
        number /= 10;

    }

    printf("%d %d",even,odd);
    return 0;
}


#include <stdio.h>

int main(void){
    unsigned int a;
    unsigned int b = 1;
    unsigned int b_sq;
    unsigned int b_cb;
    scanf("%u", &a);
    while (b<=a) {
        b_sq=b*b;
        b_cb=b*b*b;
        printf("%u %u %u\n", b, b_sq, b_cb);
        b++;
    }
    return 0;
}

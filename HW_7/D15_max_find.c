
#include <stdio.h>
int max;

int max_find(int a) {
    int b;
    scanf("%d",&b);
    max = a;
    if (b != 0) {
        if (max >= b) {
            max = max;
        } else {
            max = b;
        }
        max_find(max);
    }
    return  max;
}

int main(void) {
    int number;
    scanf("%d",&number);
    number = max_find(number);
    printf("%d",number);
    return 0;
}



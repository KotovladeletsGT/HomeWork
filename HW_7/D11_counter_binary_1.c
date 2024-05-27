#include <stdio.h>
int counter = 0;
int binary_one(int num) {
    int a;
    a = num % 2;
    num = num / 2;
    if (a == 1) {
        counter ++;
    }
    if (num > 0) {
        binary_one(num);
    }
        return  0;
}

int main(void) {
    int num;
    scanf("%d",&num);
    binary_one(num);
    printf("%d",counter);
    return 0;
}

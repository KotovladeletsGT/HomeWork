#include <stdio.h>

int main(void) {
    int in_num, ansv;
    scanf("%d",&in_num);
    ansv = module(in_num);
    printf("%d",ansv);
    return 0;
}


int module(int num) {
    int ansv;
    if (num < 0 ) {
        ansv = -1*num;
    }
    else {
        ansv=num;
    }
    return ansv;
}

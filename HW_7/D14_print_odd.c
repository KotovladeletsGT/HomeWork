#include <stdio.h>

void print_odd(void){
    int n;
    scanf("%d", &n);
    if(n != 0){
        if(n & 0b01){
            printf("%d ", n);
        }
        print_odd();
    }
}

int main(void){
    print_odd();
    return 0;
}

#include <stdio.h>

int print_num(int num) {
    int a;
    a = num % 10;
    num = num / 10;
    if (num > 0) {
        print_num(num);
    }
    printf("%d ",a);
    return  0;
}

int main(void) {
    int num;
    scanf("%d",&num);
    print_num(num);
    return 0;
}


#include <stdio.h>


int print_digits(int n) {
    int tmp, res;
    tmp = n % 10;
    res = n / 10;
    if (res > 0) {
        print_digits(res);
    }
    printf("%d ",tmp);
}

int main(void) {
    int n;
    scanf("%d",&n);
    print_digits(n);
    return 0;
}

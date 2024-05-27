
#include <stdio.h>
int sum = 0;
int rec(int n) {
    if (n > 0) {
        rec(n - 1);
        sum = sum + n;
    }
    return  0;
}

int main(void) {
    int n;
    scanf("%d",&n);
    rec(n);
    printf("%d ",sum);
    return 0;
}



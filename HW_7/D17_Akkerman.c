#include <stdio.h>

int akkerman(int m, int n){
    static int ret = 0;
    if(m == 0){
        ret = n + 1;
    }
    if( m > 0 && n == 0){
        ret = akkerman(m - 1, 1);
    }
    if( m > 0 && n > 0){
        ret = akkerman(m - 1, akkerman(m, n - 1));
    }
    return ret;
}

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", akkerman(a, b));
    return 0;
}

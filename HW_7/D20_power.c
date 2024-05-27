
#include <stdio.h>

int answ = 1;

int recurs_power(int n, int p) {
    if (p) {
        answ = answ * n;
        recurs_power(n, p - 1);
    } else {
        return 1;
    }
    return answ;
}

int main (void) {
    int n, p, res;
    scanf("%d%d", &n,&p);
    res = recurs_power(n,p);
    printf("%d", res);
    return 0;
}

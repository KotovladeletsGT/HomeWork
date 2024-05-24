#include <stdio.h>

int main(void) {
    int n, p, res;
    scanf("%d%d",&n,&p);
    res = power(n,p);
    printf("%d",res);
    return 0;
}


int power(n,p) {
    int res;
    res=1;
    while (p>0) {
        res=res*n;
        p--;
    }

    return res;
}

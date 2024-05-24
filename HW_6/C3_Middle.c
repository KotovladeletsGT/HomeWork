#include <stdio.h>

int main(void) {
    int a, b, res;
    scanf("%d%d",&a,&b);
    res = middle(a,b);
    printf("%d",res);
    return 0;
}


int middle(a,b) {
    int res;
    res=a+b;
    res=res/2;

    return res;


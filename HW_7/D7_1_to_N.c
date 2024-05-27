#include <stdio.h>

int rec(int n) {
    printf("%d ",n);
    if (n > 1) {
        rec(n - 1);

    }

}

int main(void) {
    int n;
    scanf("%d",&n);
    rec(n);
    return 0;
}

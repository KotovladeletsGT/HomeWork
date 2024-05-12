#include <stdio.h>

int function(x) {
    int res;
    if (x < -2) {
        res = 4;
    }

    if (x >=2 ) {
        res = x * x + 4 * x + 5;
    }

    if (x >= -2 && x < 2) {
        res = x * x;
    }

    return res;
}





int main(void) {
    int x, res;
    scanf("%d",&x);
    res = function(x);
    while (x !=0 ) {
        scanf("%d",&x);
        if (res > function(x)) {
            res = res;
        }
        else {
            res = function(x);
        }
    }
    printf("%d",res);
    return 0;

}






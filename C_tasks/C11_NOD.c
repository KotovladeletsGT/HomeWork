#include <stdio.h>

int Evclid(int a, int b){
    while (a> 0){
		if (a == b){
            return a;
        }    
        if (a > b){
            a -= b;
        }
        if (a < b){
            b -= a;
        }
    }
}

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", Evclid(a, b));
    return 0;
}

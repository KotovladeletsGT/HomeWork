#include <stdio.h>

int main(void){
    int n;
    int res = 0;
    int massiv[10] = {0};
    int tmp;
    scanf("%d", &n);
    while(n > 0){
        tmp = n % 10;
        massiv[tmp] = massiv[tmp] + 1;
        n = n / 10;
    }
    for(int i = 9; i >= 0; i--){
        while(massiv[i]){
            res = res + i;
            res = res * 10;
            massiv[i] = massiv [i] - 1;
        }
    }
    res = res / 10;
    printf("%d", res);
    return 0;
}

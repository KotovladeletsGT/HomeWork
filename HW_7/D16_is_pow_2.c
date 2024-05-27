#include <stdio.h>

int is2pow(int n){
    static int counter = 0;
    if(n > 0){
        counter = counter + (n % 2);
        is2pow(n / 2);
    }
    if(counter == 1){
        return 1;
    } else {
        return 0;
    }

}

int main(void){
    int n;
    scanf("%d", &n);
    if (is2pow(n)){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

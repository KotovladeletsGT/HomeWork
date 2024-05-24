#include <stdio.h>

int main(void){
    unsigned int a, b, c;
    scanf("%u%u%u", &a, &b, &c);
    if(a + b <= c){
        printf("NO");
    }
    else if(a + c <= b){
        printf("NO");
    }
    else if(c + b <= a){
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}

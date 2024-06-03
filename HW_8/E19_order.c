#include <stdio.h>

void print(int num){
    int tmp1, tmp2;
    tmp1 = num % 10;
    tmp2 = num / 10;
    if(tmp2 > 0){
        print(tmp2);
    }
    printf("%d ", tmp1);
}

int main(void){
    int number;
    scanf("%d", &number);
    print(number);
    return 0;
}

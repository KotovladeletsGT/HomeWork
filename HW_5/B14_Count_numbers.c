#include <stdio.h>

int main(void){
    char number;
    int count = 0;
    while((number = getchar()) != '\n') {
        if(number == ' ') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

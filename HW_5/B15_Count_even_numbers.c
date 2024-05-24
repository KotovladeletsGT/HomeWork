#include <stdio.h>

int main(void){
    char number;
    int tmp = 0;
    int count = 0;
    while((number = getchar()) != '\n') {
        if(number == ' ') {
			if ((tmp & 1) == 0) {
            count++;
			}
        }
        tmp = number;
    }
    printf("%d", count);
    return 0;
}

#include <stdio.h>

int main(void){
    char first;
    char second;
    int counter = 0;

    second = getchar();
    first = second;
    counter++;

    while (1){
        second = getchar();
        if (second == '.'){
            printf("%c%d", first, counter);
            break;
        }
        if (second == first){
            counter++;
        } else {
            printf("%c%d", first, counter);
            counter = 1;
        }
        first = second;
    }
    return 0;
}

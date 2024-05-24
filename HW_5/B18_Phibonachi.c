#include <stdio.h>

int main(void){
	int count, tmp;
	int first = 1, second = 0;
    scanf("%u", &count);
    printf("%u", first);
    if(count == 1){
        return 0;
    }
    for(int i = 1; i < count; i++){
        printf(" %u", first + second);
        tmp = first;
        first += second;
        second = tmp;
    }
    return 0;
}

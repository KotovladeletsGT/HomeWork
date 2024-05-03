#include <stdio.h>

int main(void){
    int number, digit;

    scanf("%d", &number);
    if (number==0) {
        printf("%d", number);
    }
    else {
		while (number > 0) {
			digit = number % 10;
            number=number/10;
            printf("%d", digit);
        }
	}

    return 0;
}


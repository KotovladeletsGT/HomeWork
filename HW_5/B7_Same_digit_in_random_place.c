#include <stdio.h>

int main(void){
    int number, digit, anotherdigit, anothernumber;
    scanf("%d",&number);
    while (number>0) {
        digit = number % 10;
        anothernumber = number / 10;
		while (anothernumber>0) {
			anotherdigit = anothernumber % 10;
			if (anotherdigit == digit) {
				printf("YES");
				return 0;
			}
			anothernumber /= 10;
		}
        number /= 10;
    }
    printf("NO");
    return 0;
}

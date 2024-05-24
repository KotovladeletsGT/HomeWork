
#include <stdio.h>


int main(void) {
    int number, digit, alleven;
    alleven = 1;
    scanf("%d",&number);

    while (number>0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            alleven=alleven*1;
        }
        else {
            alleven=alleven*0;
        }
        number /= 10;
    }
	if (alleven == 1) {
		printf("YES");
    }
	else {
		printf("NO");
	}
    return 0;
}


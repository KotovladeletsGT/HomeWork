#include <stdio.h>

int main(void) {
    int massiv[8] = {0};
    int number;
    int i;
    int j;
	scanf("%d",&number);
	for (i = 2; i <= 9; i++) {
		for (j = 2; j <= number; j++) {
			if ((j % i) == 0) {
				massiv[i-2]++;
			}
		}
	} 
	
	for (i = 0; i < 8; i++) {
		printf ("%d %d \n", i+2, massiv[i]);
	} 
    return 0;
}

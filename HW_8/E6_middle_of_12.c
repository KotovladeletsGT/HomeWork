#include <stdio.h>

int main(void) {
    int massiv[12]={0};
    int i = 0;
	float summ = 0;
    while (i < 12) {
		scanf("%d",&massiv[i]);
		summ = summ + massiv [i];
		i++;	
	}	
	summ = summ / 12;
    printf("%0.2f", summ);
    return 0;
}

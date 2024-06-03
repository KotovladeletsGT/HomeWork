#include <stdio.h>

int main(void) {
    int massiv[10]={0};
    int i = 0;
	int summ = 0;
    while (i < 10) {
		scanf("%d",&massiv[i]);
		if (massiv [i] > 0) {
			summ = summ + massiv [i];
		}
		i++;	
	}	
    printf("%d", summ);
    return 0;
}

#include <stdio.h>

int main(void) {
    int massiv[10]={0};
	int i, min, max, nmin, nmax;
	i = 0;
	nmin = 1;
	nmax = 1;
    while (i < 10) {
		scanf("%d",&massiv[i]);
		if (i == 0) {
			min = massiv [0];
			max = massiv [0];
		}
		
		if (massiv [i] < min) {
			min = massiv [i];
			nmin = i+1;
		}
		
		if (massiv [i] > max) {
			max = massiv [i];
			nmax = i+1;
		}
		i++;	
	}	
    printf("%d %d %d %d", nmax, max, nmin, min);
    return 0;
}

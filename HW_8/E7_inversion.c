#include <stdio.h>

int main(void) {
    int massiv[10]={0};
    int i = 0;
    int tmp;
    
    while (i < 10) {
		scanf("%d",&massiv[i]);
		i++;	
	}	
	i=0;
	
	while (i < 5/2) {
		tmp = massiv [i];
		massiv [i] = massiv [4 - i]; 
		massiv [4 - i] = tmp;
		i++;	
	}
	i=5;
	while (i < 7) {
		tmp = massiv [i];
		massiv [i] = massiv [14 - i]; 
		massiv [14 - i] = tmp;
		i++;	
	}

	
	i=0;
	while (i < 10) {
		printf("%d ", massiv[i]);
		i++;	
	}	
    return 0;
}

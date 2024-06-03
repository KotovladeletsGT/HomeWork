#include <stdio.h>

int main(void) {
    int massiv[12]={0};
    int i = 0;
    int tmp;
    
    while (i < 12) {
		scanf("%d",&massiv[i]);
		i++;	
	}	
	i = 0;
	
	while (i < 2) {
		tmp = massiv [i];
		massiv [i] = massiv [3 - i]; 
		massiv [3 - i] = tmp;
		i++;	
	}
	i = 4;
	
	while (i < 6) {
		tmp = massiv [i];
		massiv [i] = massiv [11 - i]; 
		massiv [11 - i] = tmp;
		i++;	
	}
	i = 8;
	
		while (i < 10) {
		tmp = massiv [i];
		massiv [i] = massiv [19 - i]; 
		massiv [19 - i] = tmp;
		i++;	
	}
	i = 0;
	
	
	while (i < 12) {
		printf("%d ", massiv[i]);
		i++;	
	}	
    return 0;
}

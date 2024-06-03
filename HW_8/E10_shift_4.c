#include <stdio.h>

void shift(int len, int* massiv) {
	int tmp;
	tmp = massiv[len - 1];
	for ( int i  = len - 1; i > 0; i--) {
		massiv[i] = massiv[i - 1]; 
	}	  
	massiv[0] = tmp; 
}

int main(void) {
    int massiv[12]={0};
    int i = 0;
    
    while (i < 12) {
		scanf("%d",&massiv[i]);
		i++;	
}
	shift (i, massiv);
	shift (i, massiv);
	shift (i, massiv);
	shift (i, massiv);
	i = 0;
	while (i < 12) {
		printf("%d ", massiv[i]);
		i++;	
	}	
	
	return 0;
}

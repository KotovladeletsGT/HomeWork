#include <stdio.h>

int main(void) {
	int massiv[10]={0};
	int pos[10]={0};
    int neg[10]={0};
    int i = 0;
    while (i < 10) {
		scanf("%d",&massiv[i]);
 		if (massiv[i] > 0) {
			pos[i] = massiv[i];
		}		
		if (massiv[i] < 0) {
			neg[i] = massiv[i];
		}	
		i++;
	}	
	i = 0;
    while (i < 10) {
		if (pos[i] != 0) {
		printf("%d ", pos[i]);
		}
		i++;	
	}	
	i = 0;
	while (i < 10) {
		if (neg[i] != 0) {
		printf("%d ", neg[i]);
		}
		i++;	
	}	
    return 0;
}

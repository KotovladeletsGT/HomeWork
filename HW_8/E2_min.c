#include <stdio.h>

int main(void) {
    int massiv[5]={0};
    int i = 0;
	int answ;
    while (i < 5) {
		scanf("%d",&massiv[i]);
		if (i == 0) {
			answ = massiv [0];
		}
		
		if (massiv [i] < answ) {
			answ = massiv [i];
		}
		i++;	
	}	
    printf("%d", answ);
    return 0;
}

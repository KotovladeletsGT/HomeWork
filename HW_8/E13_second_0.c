#include <stdio.h>

int main(void) {
    int massiv[10] = {0};
    int i = 0;
    int tmp = 0;
    while (i < 10) {
		scanf("%d",&massiv[i]);
		i++;	
	}
	for (i = 0; i < 10; i++) {
		tmp = massiv [i];
		tmp = tmp / 10;
			if ((tmp % 10) == 0) {
				printf("%d ", massiv[i]);
			}
	}
    return 0;
}

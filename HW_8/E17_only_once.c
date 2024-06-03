#include <stdio.h>

int main(void) {
    int massiv[10] = {0};
	int flag;
    int i = 0;
	int j = 0;
    while (i < 10) {
		scanf("%d",&massiv[i]);
		i++;	
	}
	for (i = 0; i < 10; i++) {
		flag = 1;
		for (j = 0; j < 10; j++) {
			if (i != j) {
				if (massiv[i] == massiv[j]) {
					flag = 0;
					break;
				}
			}
		}
		if (flag) {
			printf("%d ", massiv [i]); 
		}
	}
    return 0;
}

#include <stdio.h>
#define N 1000
void bubble_up(int* massiv, int a, int b) {
	int tmp;
    for(int i = a; i < b; i++){
        for(int j = i; j < b; j++){
            if(massiv[i] > massiv[j]){
                tmp = massiv[j];
                massiv[j] = massiv[i];
                massiv[i] = tmp;
            }
        }
    }
}

void find_lost (int* massiv) {
	int i = 0;
	for (i = 0; i < N; i++) {
		if (massiv[i] != 0) {
			if (massiv[i+1] != (1 + massiv[i])) {
				printf("%d", massiv[i]+1);
				break;
			}
		}
	}
}


int main(void) {
    int massiv[N]={0};
    int i = 0;
	while (i < N) {
		scanf("%d",&massiv[i]);
		if (massiv[i] == 0) {
			break;
		}
		i++;	
   }
   
	bubble_up(massiv, 0, N);
	i = 0;
	find_lost(massiv);
    return 0;
}

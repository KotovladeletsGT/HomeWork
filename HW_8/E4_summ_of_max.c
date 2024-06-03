#define A 0
#define B 10
#include <stdio.h>

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
int main(void) {
    int massiv[10]={0};
	int i, first_max, second_max;
	i = 0;
	while (i < 10) {
		scanf("%d",&massiv[i]);
	i++;
	}
	i = 0;
	bubble_up(massiv, A, B);
	first_max = massiv[9];
	second_max = massiv[8];
    printf("%d ", first_max + second_max);
    return 0;
}

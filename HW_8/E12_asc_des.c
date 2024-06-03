#include <stdio.h>
#define A 0
#define B 10

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

void bubble_down(int* massiv, int a, int b) {
	int tmp;
    for(int i = a; i < b; i++){
        for(int j = i; j < b; j++){
            if(massiv[i] < massiv[j]){
                tmp = massiv[j];
                massiv[j] = massiv[i];
                massiv[i] = tmp;
            }
        }
    }
}

int main(void) {
    int massiv[10]={0};
    int i = 0;
	while (i < 10) {
		scanf("%d",&massiv[i]);
		i++;	
   }
   
   bubble_up(massiv, A, B/2);
   i=0;
   bubble_down(massiv, B/2 , B);
   i=0;
	while (i < 10) {
		printf("%d ", massiv[i]);
		i++;	
	}	
    return 0;
}

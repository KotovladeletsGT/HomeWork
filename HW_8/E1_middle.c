#include <stdio.h>

int main(void) {
    int massiv[5]={0};
    int i;
    float answ = 0;
    while (i < 5) {
		scanf("%d",&massiv[i]);
		answ = answ + massiv[i];
		i++;	
	}	
    answ = answ / 5;
    printf("%0.3f", answ);
    return 0;
}

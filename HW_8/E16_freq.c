#include <stdio.h>

int main(void) {
    int massiv[10]={0};
    int i = 0;
    int j = 1;
    while (i < 10) {
		scanf("%d",&massiv[i]);
		i++;	
	}
	int max_repeat = 0;
	int repeat = 0;
	int position = 0;
	i = 0;
	while (i < 10) {
		j = i;
		repeat = 0;
		while (j < 10) {
			if (massiv [i] == massiv[j]) {
				repeat++;
			}
			j++;
		}
		if (repeat > max_repeat) {
			max_repeat = repeat;
			position = i;
		}
		i++;	
	}	
	printf("%d", massiv[position]);
    return 0;
}

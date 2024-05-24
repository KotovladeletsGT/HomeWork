#include <stdio.h>

int factorial(int N) {  
	int count = 1;
	int res = 1;
	while(count <= N) {
		res = res * count;
		count++;
	}
	return res;
}

int main(void) {
	int N, res;
	scanf("%d",&N);
	res = factorial(N);
	printf("%d", res); 
	return 0;
}



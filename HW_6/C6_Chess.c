
#include <stdio.h>
long double chess(int N) {
	long double res = 1;
	while (N > 1) {
		res = res * 2;
		N--;
	}
	return res;
}

int main(void) {
	int N;
	long double res;
	scanf("%d", &N);
	res = chess(N);
	printf("%.0Lf", res); 
	return 0;
}


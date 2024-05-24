
#include <stdio.h>

int metric(int N, int P) {
	int res = 0, ansv = 0, count = 1;
	if (N == 0 || P == 0) {
		printf("0");
	}	
	while(N>0) {
		res = N % P;
		N = N / P;
		ansv += count * res;
		count = count * 10;
	} 
	return ansv;
}

int main(void)
{	int N, P;
	scanf("%d%d", &N, &P);
	printf("%d", metric(N, P));
	return 0;
}


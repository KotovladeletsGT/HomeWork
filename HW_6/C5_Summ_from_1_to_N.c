
#include <stdio.h>

int summ(N) {
	int res = 0;
	while(N > 0) {
		res = res + N;
		N--;
	}
	return res;
}

int main(void)
{	int N, res;
	scanf("%d", &N);
	res = summ(N);
	printf("%d", res); 
	return 0;
}


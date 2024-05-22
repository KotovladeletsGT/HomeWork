#include <stdio.h>
int digits_growing(int n) {

    int tmp = 0, digit = 0;
    tmp = n % 10;
    n = n / 10;
    while (n > 0) {
        digit = n % 10;
        if (digit < tmp) {
			tmp = digit;
		} else {
			return 0;
		}
        n /= 10;
    }
    
    return 1;
}


int main(void) {
    int n, answ;
    scanf("%d",&n);
    answ = digits_growing(n);
    if (answ) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}



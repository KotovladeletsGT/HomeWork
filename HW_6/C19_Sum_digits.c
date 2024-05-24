#include <stdio.h>

int count = 0;

char digit_to_num(char c) {
	c = c - 0x30;
	count = count + c;
	return 0;
}


int main(void) {
    char c;
    while(1) {
		scanf("%c", &c);
		if (c == '.') {
			break;
		}
		if (c >= 0x30 && c <= 0x39) {
			digit_to_num(c);
		}
	}
	printf("%d", count);
	return 0;
}

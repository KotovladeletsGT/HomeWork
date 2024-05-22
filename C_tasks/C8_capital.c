#include <stdio.h>


char capital_letter(char character) {
	char answ;
	answ = character - 0x20;
	printf ("%c",answ);
	return 0;
}


int main(void) {
    char character;
    while(1) {
		scanf("%c", &character);
		if (character == '.') {
			break;
		}
		if (character >= 0x61 && character <= 0x7A) {
			capital_letter (character);
		} else { 
			printf ("%c",character);
		}
	}
	return 0;
}

#include <stdio.h>

int lb = 0, rb = 0;

char bracket(char character) {
	
	if (character == '(') {
		lb++;
	}
	else if (character == ')') {
		rb++;
	} if (lb >= rb) {	
	return 1;
	}
	return 0;
}


int main(void) {
    char character;
    int answ = 1;
    while(1) {
		scanf("%c", &character);
		if (character == '.') {
			break;
		}
	answ *= bracket(character);
	
	}
	if (lb != rb) {
		answ = 0;
	}
	
		
	if (answ == 1) {
		printf("YES");
	} else {
		printf("NO");
	}
    return 0;
}




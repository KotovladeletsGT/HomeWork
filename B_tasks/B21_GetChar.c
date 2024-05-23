
#include <stdio.h>
int main(void)
{
	char letter;

	while (1) {
		letter = getchar();
		if (letter == '.') {
			break;
		}
		if (('A' <= letter) && (letter <= 'Z')) {
			letter = letter + 0x20;
			printf("%c", letter);
		}
		else { 
			printf("%c", letter);
		}
	}
	
	return 0;
}


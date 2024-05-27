
#include <stdio.h>

int reverse_string() {
    char ch;
    ch = getchar();
    if (ch != '.') {
        reverse_string();
        printf("%c", ch);
    }
}

int main(void) {
    reverse_string();
    return 0;
}

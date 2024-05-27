
#include <stdio.h>
int counter = 0;

int acounter(void) {
    char ch;
    ch = getchar();
    if (ch != '.') {
        acounter();
    }
    if (ch == 'a') {
        counter ++;
    }
}

int main(void) {
    acounter();
    printf("%d ",counter);
    return 0;
}

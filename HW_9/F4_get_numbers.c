
#include <stdio.h>

void print_digit(char s[]) {
    int results[10] = {0};
    int i = 0;
    int flag = 1;
    int counter = 0;
    while (flag) {
        if (s[counter] >= '0' && s[counter] <= '9') {
            results[ s[counter] - '0']++;
        } else if (s[counter] == '.') {
        flag = flag * 0;
        }
        counter++;
    }

    while (i < 10) {
        if (results[i] > 0) {
            printf("%d %d \n", i, results[i]);
        }
    i++;
    }
}



#include <stdio.h>

void freq_digits(int* massiv) {
    char symbol;
    int flag = 1;
    while (flag) {
        symbol = getchar();
        if (symbol >= '0' && symbol <= '9') {
        massiv[symbol - '0']++;
        } else {
        flag = flag * 0;
        }
    }
}

int main(void)
{
    int i = 0;
    int results[10] = {0};
    freq_digits(results);
    while (i < 10){
        if (results[i] > 0) {
            printf("%d %d \n", i, results[i]);
        }
    i++;
    }
    return 0;
}


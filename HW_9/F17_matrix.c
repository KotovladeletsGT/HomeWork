#include <stdio.h>

void matrix_scan(int* massiv) {
    int i = 0;
    while (i < 25) {
        scanf("%d", &massiv[i]);
        i++;
    }
}

int main(void) {
    int massiv[25] = {0};
    int track = 0;
    int i = 0;
    matrix_scan(massiv);
    while (i < 25) {
        track = track + massiv[i];
        i = i + 6;
    }
    printf("%d", track);
    return 0;
}

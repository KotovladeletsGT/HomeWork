
#include <stdio.h>

void matrix_scan(int* massiv) {
    int i = 0;
    while (i < 25) {
        scanf("%d", &massiv[i]);
        i++;
    }
}

int matrix_average(int* massiv) {
    int track = 0;
    int average = 0;
    int i = 0;
    while (i < 25) {
        track = track + massiv[i];
        i = i + 6;
    }
    average = track / 5;
    return average;
}
int main(void) {
    int massiv[25] = {0};
    int average = 0;
    int counter = 0;
    int i = 0;
    matrix_scan(massiv);
    average = matrix_average(massiv);
    while (i < 25) {
        if (massiv[i] > average) {
            counter++;
        }
    i++;
    }
    printf("%d", counter);
    return 0;
}


#include <stdio.h>

void find_max_in_string(int srs[10][10], int* dist) {
    int i = 0;
    int j = 0;
    int max = 0;
    for(i = 0; i < 10; i++) {
        max = srs[j][0];
        for(j = 0; j < 10; j++) {
            if (srs[i][j] > max) {
                max = srs[i][j];
            }
        }
        dist[i] = max;
    }
}

int main(void) {
    int matrix[10][10] = {0};
    int dist[10] = {0};
    int i = 0; // Номер строки
    int j = 0; // Номер столбца
    int sum = 0;
    while (i < 10) {
        while (j < 10) {
            scanf("%d", &matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    find_max_in_string(matrix, dist);
    i = 0;
    while(i < 10) {
        sum = sum + dist[i];
        i++;
    }
    printf("%d", sum);
return 0;
}
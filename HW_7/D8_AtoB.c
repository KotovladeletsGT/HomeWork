#include <stdio.h>

int AtoB(int A, int B) {
    if (A == B) {
        printf ("%d ", A);
    } else {
        printf ("%d ", A);
        if (A > B) {
            A--;
        } else {
            A++;
        }
        AtoB(A, B);
    }
}

int main(void) {
    int A, B;
    scanf("%d%d",&A,&B);
    AtoB(A, B);
    return 0;
}

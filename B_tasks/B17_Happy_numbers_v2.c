#include <stdio.h>

int SUM (int number) { // Функция суммирования
    int answ = 0;
    while (number>0) {
        answ = answ + (number % 10);
        number /= 10;
    }
    return answ;
}

int MULT (int number) { // Функция умножения
    int answ = 1;
    if (number==0) {
        return 0;
    }
    while (number>0) {
        answ = answ * (number % 10);
        number /= 10;
    }
    return answ;
}
int main(void)
{
    int count, data, sum, mult;
    count=10;
    scanf("%d",&data);
    while (count<=data) {
        sum=SUM(count);
        mult=MULT(count);
        if(sum == mult) {
            printf("%d ", count);
            count++;
            break;
        }
        count++;
    }
    while (count<=data) {
        sum=SUM(count);
        mult=MULT(count);
        if(sum == mult) {
            printf("%d ", count);
        }
        count++;

    }
    return 0;
}



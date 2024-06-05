#include <stdio.h>

int main(void){
    int digit;
    char letter;
    scanf("%c%d", &letter, &digit);    // Сканируем код клетки: букву и цифру
    if (letter % 2 == 0){			   // Определяем цвет по свойству чётности 
        if (digit % 2){
            printf("WHITE");
        } else {
            printf("BLACK");
        }
        
    } else {
        if (digit % 2 == 0){
            printf("WHITE");
        } else {
            printf("BLACK");
        }
    }
    return 0;
}

#include <stdio.h>

int char_control(char symbol) { //Исключим из обработки служебные символы
    int answ ;
    if (symbol == '\n') {
        answ = 0;
    } else if (symbol == '\r') {
        answ = 0;
    } else if (symbol == '0') {
        answ = 1;
    }
    return answ;
}

int read_from_file(FILE *file) {
    int number;
    fscanf(file, "%d", &number);
    return number;
}


int main(void) {
    int number;
    int answ;
    int i = 0;
    int j = 2;
    char k = 'A';
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    number = read_from_file(input_file);  // Читаем число N из файла
    i = 0;
    fclose(input_file);
    while (i <= number) {    //Печатаем в файле циклом
        if ((i % 2 == 0) && (i != 0)) {  //Определяем что элемент чётный и не 0
            if (j >= 10) { 
                j = j % 10 + 2; 
            }
            fprintf(output_file, "%d", j); // Печаем цифру
            j = j + 2;
        } 
        if (i % 2 == 1) {                   //Если элемент нечётный - букву
            fprintf(output_file, "%c", k);
            k = k + 1;
        }          
    i++;
    }
    fclose(output_file);
    return 0;
}
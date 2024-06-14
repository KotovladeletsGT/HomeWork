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

int read_from_file(FILE *file, char *mass) {
    char symbol;
    int count = 0;
    while (fscanf(file, "%c", &symbol) == 1){
        if (char_control(symbol)){
            mass[count] = symbol;
            count++;
        } else {
            break;
        }
    }
    return count;
}



int main(void) {
    char string[1000] = {0};
    int string_leght = 0;
    char symbol;
    int answ;
    int i = 0;
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    string_leght = read_from_file(input_file, string);  // Читаем файл
    fclose(input_file);
    while (i < string_leght) {
        if (string[string_leght-1] == string[i]) { // Ищем совпадающие символы
            if (i != string_leght - 1) {
            fprintf(output_file, "%d ", i);
            }    
        }
    i++;
    }
    fclose(output_file);
    return 0;
}
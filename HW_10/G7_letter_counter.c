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
    char string[10000] = {0};
    int string_leght = 0;
    char symbol;
    int small_counter = 0;
    int big_counter = 0;
    int i = 0;
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    string_leght = read_from_file(input_file, string);  // Читаем файл
    fclose(input_file);
    while (i < string_leght) {
        if ((string[i] >= 'a') && (string[i] <= 'z')) {
            small_counter++;
        } else if ((string[i] >= 'A') && (string[i] <= 'Z')) {
            big_counter++;
        }
        
    i++;
    }

    fprintf(output_file, "%d ", small_counter);
    fprintf(output_file, "%d ", big_counter);
    fclose(output_file);
    return 0;
}
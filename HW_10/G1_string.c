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

void write_in_file(FILE *file, char *mass, int len) {
    int count = 0;
    while (count < len){
        fprintf(file, "%c", mass[count]);
        count++;
    }
}

int main(void) {
    char string[100] = {0};
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
    while(i < 3) {    //Печатаем в файле циклом
        if (i < 2) { // Определяем, надо ли печатать запятые
            write_in_file(output_file, string, string_leght);
            fprintf(output_file, ", ");
        } else {    // на последней итерации - не надо
            write_in_file(output_file, string, string_leght);
            fprintf(output_file, " %d", string_leght);
        }
    i++;
    }
    fclose(output_file);
    return 0;
}
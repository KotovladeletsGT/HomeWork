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
    while (fscanf(file, "%c", &symbol) == 1) {
        if (char_control(symbol)) {
            mass[count] = symbol;
            count++;
        } else {
            break;
        }
    }
    return count;
}

int read_file_char(FILE *file, char *mass) {
    char symbol;
    int count = 0;
    while (fscanf(file, "%c", &symbol) == 1) {
        if (char_control(symbol)) {
            mass[count] = symbol;
            count++;
        } else {
            break;
        }
    }
    return count;
}

void write_file_char(FILE *file, char *mass) {
    int count = 0;
    while (mass[count]) {
        fprintf(file, "%c", mass[count]);
        count++;
    }
}

int disasembling(char *in_string, char *out_string) { //Функция рабора строки на слова
    int first = 0;
    int shift = 0;
    for(int i = 0; i < 1000; i++) {
        if (in_string[i] != ' ') {
            first = i;
            break;
        }
    }
    for(int i = first; i < 1000; i++) {
        if(in_string[i] == ' '){
            if(in_string[i - 1] != ' ') {
                out_string[i - shift - first] = '\n';
            } else {
                shift++;
            }
        } else {
            out_string[i - shift - first] = in_string[i];
        }
    }
    return 1000 - shift - first;
}


int main(void) {
    char out_string[1000] = {0};
    char massiv[1000] = {0};
    int i = 1;
    FILE *input_file;
    FILE *output_file;
    int in_mass_len;
    int out_mass_len;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    read_from_file(input_file, massiv);  // Читаем файл
    out_mass_len = disasembling(massiv, out_string);
    write_file_char(output_file, out_string);
    fclose(input_file);
    fclose(output_file);
    return 0;
}
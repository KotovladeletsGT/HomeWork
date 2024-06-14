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

int read_from_file(FILE *file, char *mass) { //Читаем из файла
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

void write_file_char(FILE *file, char *mass) { //Печатаем в файл
    int count = 0;
    while (mass[count] != 0) {
        fprintf(file, "%c", mass[count]);
        count++;
    }
}

void remove_duplicate(char *in_mass, char *out_mass) {
    int a = 0;
    int b = 0;
    int orig_flag;
    int tmp;
    char original_symbols[1000] = {0};
    while (1) {
        if (in_mass[a] == 0) { //Пробелы не печатаем
            break;
        }
        if (in_mass[a] == ' ') {
            a++;
            continue;
        }
        orig_flag = 1; //Проверяем оригинальность символа
        tmp = 0;
        while (original_symbols[tmp] != 0) { 
            if (in_mass[a] == original_symbols[tmp]) {
                orig_flag = 0;
                break;
            }
            tmp++;
        }

        if (orig_flag) { //Если символ оригинален - в выходной массив
            original_symbols[tmp] = in_mass[a];
            out_mass[b] = in_mass[a];
            b++;
        }
        a++;
    }
}

int main(void){
    FILE *input_file;
    input_file = fopen("input.txt", "r");
    FILE *output_file;
    output_file = fopen("output.txt", "w");
    char in_mass[1000] = {0};
    char out_mass[1000] = {0};

    read_from_file(input_file, in_mass);
    remove_duplicate(in_mass, out_mass);
    write_file_char(output_file, out_mass);

    fclose(input_file);
    fclose(output_file);
    return 0;
}
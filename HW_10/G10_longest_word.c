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
    while (fscanf(file, "%c", &symbol) == 1) {
        if (char_control(symbol)){
            mass[count] = symbol;
            count++;
        } else {
            break;
        }
    }
    return count;
}

int longest_word(char *mass, int string_leght, char *output_mass) {
    int start = 0;
    int end = 1;
    int max_leght = 0;
    int current_start_index = 0;
    int space_flag = 0;
   
    for(int i = 1; i < string_leght; i++) { //Ищем длинну слова
        if(mass[i] == ' ') {
            space_flag = 1;
            end = i - 1;
            if(end - start > max_leght) {
                max_leght = end - start + 1;
                current_start_index = start;
            }
            start = i + 1;
        }
    }

    if (string_leght - end > max_leght) { //Выясняем, длиннее ли это слово предыдущего
        max_leght = string_leght - end;
        current_start_index = end + 2;
    }
    if(space_flag) {
        for(int i = 0; i < max_leght; i++) {
            output_mass[i] = mass[i + current_start_index];
        }
        return max_leght;
    } else {
        for(int i = 0; i < string_leght; i++) {
            output_mass[i] = mass[i];
        }
        return string_leght;
    }
}

void write_in_file(FILE *file, char *mass, int leght) {
    int count = 0;
    while (count < leght) {
        fprintf(file, "%c", mass[count]);
        count++;
    }
}


int main(void) {
    char string[1500] = {0};
    char print[1500] = {0};
    int string_leght = 0;
    int print_leght = 0;
    int i = 0;
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    string_leght = read_from_file(input_file, string);
    print_leght = longest_word(string, string_leght, print);
    write_in_file(output_file, print, print_leght);
    fclose(input_file);
    fclose(output_file);
    return 0;
}
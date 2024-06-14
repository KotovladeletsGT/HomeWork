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

int remove_space(char *mass, int string_leght, FILE *output_file) { //Убираем пробелы
    int i = 0;
    int flag = 1;
    while(i < string_leght) {
        if(mass[i] != ' ') { 
           break;
        } 
        i++;
    }   
    while(i < string_leght) {
        if(mass[i] != ' ') {
            fprintf(output_file, "%c", mass[i]);
            flag = 1;
        } else {
            if(flag == 1) {
                fprintf(output_file, "%c", mass[i]);
                flag = 0;
            }
        }
        i++;
    }
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
    remove_space(string, string_leght, output_file);
    fclose(output_file);
    return 0;
}
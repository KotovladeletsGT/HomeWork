#include <stdio.h>
#include <string.h>

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


int get_last_posicion(char *mass, int len, char symbol){
    int posicion = 0;
    for(int i = 0; i < len; i++){
        if (mass[i] == symbol){
            posicion = i;
        }
    }
    return posicion;
}

void copy_mass(char *copy, char *paste, int len){
    for(int i = 0; i < len; i++){
        paste[i] = copy[i];
    }
}

void write_file_char(FILE *file, char *mass, int len){
    int count = 0;
    while (count < len){
        fprintf(file, "%c", mass[count]);
        count++;
    }
}

int main(void) {
    FILE *input_file;
    input_file = fopen("input.txt", "r");
    FILE *output_file;
    output_file = fopen("output.txt", "w");
    char string[1000] = {0};
    char print[1000] = {0};
    int string_lenght;
    int print_lenght;
    string_lenght = read_from_file(input_file, string);
    char html[] = "html";
    char html_dot[] = ".html";
    int last_slash;
    int last_dot;

    last_slash = get_last_posicion(string, string_lenght, '/');
    last_dot = get_last_posicion(string, string_lenght, '.');

    printf("in mass len = %d\n", string_lenght);
    printf("ld = %d, ls = %d\n", last_dot, last_slash);

    if (last_dot > last_slash) {
        copy_mass(string, print, last_dot);
        write_file_char(output_file, print, last_dot);
        fprintf(output_file, ".html");
    } else {
        copy_mass(string, print, string_lenght);
        write_file_char(output_file, print, string_lenght);
        fprintf(output_file, ".html");
    }

    fclose(input_file);
    fclose(output_file);
    return 0;
}
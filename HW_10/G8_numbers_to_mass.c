#include <stdio.h>

#define FILE_LEN 1000

#define is_number(character) (character >= '0' && character <= '9')

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

int read_file_char(FILE *file, char *mass) {
    char symbol;
    int count = 0;
    while (fscanf(file, "%c", &symbol) == 1){
        if (char_control(symbol)) {
            mass[count] = symbol;
            count++;
        } else {
            break;
        }
    }
    return count;
}

int last_position(char *mass, int len, char symbol) {
    int posicion = 0;
    for(int i = 0; i < len; i++){
        if (mass[i] == symbol){
            posicion = i;
        }
    }
    return posicion;
}

void write_file_int(FILE *file, int *mass, int len) {
    int count = 0;
    fprintf(file, "%d", mass[count]);
    count++;
    while (count < len){
        fprintf(file, " %d", mass[count]);
        count++;
    }
}

void bubble_sort(int* mass, int len) {
    int tmp;
    for(int i = 0; i < len; i++){
        for(int j = i; j < len; j++){
            if(mass[i] > mass[j]){
                tmp = mass[j];
                mass[j] = mass[i];
                mass[i] = tmp;
            }
        }
    }
}

void function(char *in_mass, int len, char *out_mass) {
    int out_count = 0;
    int in_count = 0;
    int flag = 1;
    while (1) { 
        if (is_number (in_mass[in_count]) ) {   //Находим первое число
            out_mass[out_count] = in_mass[in_count];
            in_count++;
            out_count++;
            break;
        }
        if(in_count >= len){
            flag = 0;
            break;
        }
        in_count++;
    }

    if (flag) {     //Находим остальные числа
        for(int i = in_count; i < len; i++){
            if (is_number(in_mass[i])){
                out_mass[out_count] = in_mass[i];
                out_count++;
            } else {
                if (is_number(in_mass[i - 1])) {
                    out_mass[out_count] = ' ';
                    out_count++;
                }
            }
        }
    }
}

int get_numbers(char *in_mass, int *out_mass) {
    int in_count = 0;
    int out_count = 0;
    int num = 0;
    while(1) {
        if (in_mass[in_count] == 0){
            if (is_number (in_mass[in_count - 1]) ) {
                out_mass[out_count] = num;
                out_count++;
            }
            break;
        }

        if (is_number (in_mass[in_count]) ) {
            num *= 10;
            num += in_mass[in_count] - '0';
        } else {
            out_mass[out_count] = num;
            out_count++;
            num = 0;
        }
        in_count++;
    }
    return out_count;
}

int main(void) {
    FILE *input_file;
    input_file = fopen("input.txt", "r");
    FILE *output_file;
    output_file = fopen("output.txt", "w");
    char in_mass[FILE_LEN] = {0};
    int in_mass_len;

    char char_mass[FILE_LEN] = {0};
    int int_mass[FILE_LEN] = {0};
    int int_mass_len;

    in_mass_len = read_file_char(input_file, in_mass);

    function(in_mass, in_mass_len, char_mass);
    int_mass_len = get_numbers(char_mass, int_mass);

    bubble_sort(int_mass, int_mass_len);
    if(int_mass_len) {
        write_file_int(output_file, int_mass, int_mass_len);
    }

    fclose(input_file);
    fclose(output_file);
    return 0;
}
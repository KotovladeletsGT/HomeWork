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

void print_mass(char *mass){
    while (*mass){
        printf("%c", *mass);
        mass++;
    }
    printf("\n");
}

int main(void) {
    char string[1001] = {0};
    char output[1001] = {0};
    int string_leght = 0;
    char symbol;
    int answ;
    int i = 0;
    int n = 0;
    int y = 0;
    int x;
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    string_leght = read_from_file(input_file, string);  // Читаем файл
    fclose(input_file);
    while(i < string_leght) {
        if(string[i] == ' ') {
            y++;
        }
        i++;   
    } 
    i = 0;
    printf("%d ", y);
    printf("%d ", string_leght);
    printf("TEST\n");
    while (i < string_leght) {
        printf("i = %d\n", i);
        if (string[i] != ' ') {
            n = 1;
            while (string[i + n] == ' ') {
                n++;
            }
            output[i] = string[i + n];
            if (n > 1) {
                for(x = 1; x < n; x++) {
                    output[i + x] = ' ';
                }
            }
            output[i + n] = string[i] ;
            i = i + n + 1;
        } else {
            output[i] = ' ';
            i++;
        }
    }
    printf("TEST\n");
    i = 0;
    print_mass(output);
    while (output[i]) {
        fprintf(output_file, "%c", output[i]);
        i++;
    }
    if ((string_leght - y) % 2 != 0) {
        fprintf(output_file, "%c", string[string_leght-1]);
    }
    

    fclose(output_file);
    return 0;
}
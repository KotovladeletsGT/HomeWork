#include <stdio.h>

int string_leght = 0;
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

int is_palindrom(char *str) {
    char inv_str[1000] = {0};
    int i = 0;
    int answ = 1;
    
    for(int j = 0; j < string_leght; j++) { // Запоминание инверсии массива 
        inv_str[j] = str[string_leght - 1 - j];
    }
    i = 0;
    while((str[i] != 0) && (inv_str[i] != 0)) { // Решение  о тождественности
        if(inv_str[i] != str[i]) {
           answ = 0;
           break;
        } 
        i++;
    }
    return answ;  
}


int main(void) {
    
    char str[1000] = {0};
    int i = 0;
    char symbol;
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    
    string_leght = read_from_file(input_file, str);  // Читаем файл
    fclose(input_file);
    if(is_palindrom(str)) {
        fprintf(output_file, "YES");
    } else {
        fprintf(output_file, "NO");
    }
    fclose(output_file);
    return 0;
}
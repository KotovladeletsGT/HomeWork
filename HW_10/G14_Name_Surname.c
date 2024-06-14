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
        if (char_control(symbol)) {
            mass[count] = symbol;
            count++;
        } else {
            break;
        }
    }
    return count;
}

void printf_string(FILE* file, char* string) { //Пишем в файл
    int count = 0;
    while(string[count] != '\0') {
        fprintf(file, "%c", string[count]);
        count++;
    }
}

void name_surname(char *line, char *name, char *surname){
    int a_counter = 0;
    int b_counter = 0;
    int count = 0;
    
    while(1) { //Ищем фамилию
        if(line[count] == ' ') {
            a_counter = count;
            break;
        }
        count++;
    }

    for(int i = 0; i < a_counter; i++) { //Пишем найденную фамилию в массив "фамилия"
        surname[i] = line[i];
    }
    
    b_counter = a_counter + 1; //Аналогично ищем имя
    count = b_counter;
    while (1) {
        if (line[count] == ' ') {
            a_counter = count;
            break;
        }
        count++;
    }

    for(int i = b_counter; i < a_counter; i++) { //Пишем найденное имя в массив "имя"
        name[i - b_counter] = line[i];
    }
}

int make_print(char *print, char *name, char *surname) { //Готовим информацию для печати

    int count = 0;  
    char hello[7] = "Hello, "; //Печатем "Hello" и подставляем данные
    for(int i = 0; i < sizeof(hello); i++) {
        print[count] = hello[i];
        count++;
    }
    int i = 0;
    while (name[i] != 0) {
        print[count] = name[i];
        i++;
        count++;
    }
    print[count] = ' ';
    count++;
    i = 0;
    while (surname[i] != 0) {
        print[count] = surname[i];
        i++;
        count++;
    }
    print[count] = '!';
    count++;
    return count;
}

int surname_lenght;
int name_lenght;

int main(void){
    FILE *input_file;
    input_file = fopen("input.txt", "r");
    FILE *output_file;
    output_file = fopen("output.txt", "w");
    char string[200] = {0};
    int string_lenght;
    char name[200] = {0};
    char surname[200] = {0};
    char print[200] = {0};
    int print_lenght;
    string_lenght = read_from_file(input_file, string);
    
    name_surname(string, name, surname);
    print_lenght = make_print(print, name, surname);
    printf_string(output_file, print);

    fclose(input_file);
    fclose(output_file);
    return 0;
}
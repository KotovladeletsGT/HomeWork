#include <stdio.h>

int char_control(char symbol) { //Исключим из обработки служебные символы
    int answ ;
    if (symbol == '0') {
        answ = 1;
    }
    return answ;
}

int read_from_file(FILE *file, char *mass) { //Прочитаем файл
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

int can_I(int num){
    int line = 1;
    int sum = 1;
    for (int i = 2; ;i++){
        if (num == sum) {
            return line;
        }
        if (num < sum){
            return 0;
        }
        sum += i;
        line++;
    }
}

int main(void) {
    char string[10000] = {0};
    int string_leght = 0;
    char symbol;
    int rocks = 0;
    int rock_counter = 0;
    int space_counter = 1;
    int rock_print = 0;
    int space_print = 0;
    int within = 0;
    int lines = 0;
    int i = 0;
    int j = 1;
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    string_leght = read_from_file(input_file, string);  // Читаем файл
    fclose(input_file);
    while (i < string_leght) {
        if ((string[i] == '*')) {
            rocks++;
        }
    i++;
    }
    printf(" Число камней: %d \n", rocks);
    lines = can_I(rocks);
    if (lines) {
        i = 0;
        while(rock_counter < rocks) {
            within = within + 1;
            rock_counter = rock_counter + (1 + i);
            space_counter = lines - j;
            i++;
            j++;
            printf("Ширина: %d, Использовано камней: %d Пробелы: %d \n", within, rock_counter, space_counter);
            rock_print = within;
            space_print = space_counter;
            if (rock_counter > rocks) {
                fprintf(output_file, "NO");
            } else {
                while(space_print > 0) {
                    fprintf(output_file, "%c", ' ');
                    space_print--;
                }
                while(rock_print > 0) {
                    fprintf(output_file, "%c", '*');
                    if(rock_print > 1) {
                        fprintf(output_file, "%c", ' ');
                    }
                    rock_print--;
                }
                if (space_counter) {
                    fprintf(output_file, "%c", '\n');
                }
            }
        }
    } else {
        fprintf(output_file, "NO");
    }

    fclose(output_file);
    return 0;
}





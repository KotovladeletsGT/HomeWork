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


void replace(char* src, char* word_ts, char* word_fs) {
    char buffer[2000 + 1] = {'\0'};
    char *pos;
    int old_len = strlen(word_ts);
    int new_len = strlen(word_fs);
    int len = 0;
    char* cur_pos = src;
    while ((pos = strstr(cur_pos, word_ts)) != NULL)
    {
        strncat(buffer, cur_pos, pos - cur_pos);
        len += pos - cur_pos;
        strcat(buffer, word_fs);
        len += new_len;
        cur_pos = pos + old_len;
    }
    strcat(buffer, cur_pos);
    strcpy(src, buffer);
}

void printf_string(FILE* file, char* string) {
    int count = 0;
    while(string[count] != '\0') {
        fprintf(file, "%c", string[count]);
        count++;
    }
}

int main(void) {
    char string[2000] = {0};
    char output[2000] = {0};
    int string_leght = 0;
    char symbol;

    
    FILE *input_file;
    FILE *output_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    string_leght = read_from_file(input_file, string);  // Читаем файл
    fclose(input_file);
    replace(string, "Cao", "Ling" );
    printf_string(output_file, string);
    fclose(output_file);
    return 0;
}
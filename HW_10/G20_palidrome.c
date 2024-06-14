#include <stdio.h>
#include <string.h>


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

void small_letters(char *mass){ //Для однозначности переводим все буквы в нижний регистр
    int i = 0;
    while (mass[i]) {
        if (mass[i] >= 'A' && mass[i] <= 'Z') {
            mass[i] = mass[i] + 0x20;
        }
        i++;
    }
}

void freq_analize(char *str, int *mass) { //Выполним частотный анализ
    int j = 0;
    while (str[j]) {
        if(str[j] >= 'a' && str[j] <= 'z') {
            mass[str[j] - 'a']++;
        }
        j++;
    }
}

int main(void){
    FILE *input_file;
    input_file = fopen("input.txt", "r");
    char massiv[2000] = {0};
    int alfabet[26] = {0};
    int odd_num_letters = 0;
    read_from_file(input_file, massiv);

    small_letters(massiv);
    freq_analize(massiv, alfabet);

    for(int i = 0; i < 26; i++) { // Считаем число букв, встречающихся нечётное число раз
        if (alfabet[i] % 2 == 1) {
            odd_num_letters++;
        }
    }
    
    if (odd_num_letters > 1) { // Если слово - палиндром - может быть только одна нечётная буква в центре
        printf("NO");
    } else {
        printf("YES");
    }

    fclose(input_file);
    return 0;
}
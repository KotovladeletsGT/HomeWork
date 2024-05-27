#include <stdio.h>

int main(void){
    int n, tmp = 1, count = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("%d ", tmp);
        if(tmp == count){
            tmp++;
            count = 1;
        } else{
            count++;
        }           
    }
    return 0;
}

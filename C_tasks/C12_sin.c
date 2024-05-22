#include <stdio.h>

float power(float n, float p) {
	float tmp;
	p--;
	tmp=n;
	while (p > 0) {
		tmp *= n;
		p--;
	}	
	return tmp;
}

float factorial (float n) {
	float count, ret = 1;
	count = 1;
	while (count <= n) {
	ret *= count;
	count ++;
	}
	return ret;	
}

float sinus(float n){
    float ret;
    int sign;
    float tmp;
    ret = n;
    for(int i = 1; i <= 4; i++){
        if (i % 2){
            sign = -1;
        } else {
            sign = 1;
        }
        tmp = sign*(power(n, i + i + 1) / factorial(i + i + 1));

        ret += tmp;
    }
    return ret;
}
int main(void){
    float number, rad, sin;
    scanf("%f",&number);
	rad = (number * 3.1415)/180;
	sin = sinus (rad);
    printf("\n%0.3f", sin);
    return 0;
}


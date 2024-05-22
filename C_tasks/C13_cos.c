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

float cosinus(float n){
    float ret;
    int sign;
    ret = 1;
    for(int i = 1; i <= 4; i++){
        if (i % 2){
            sign = -1;
        } else {
            sign = 1;
        }
        ret += sign*(power(n, i + i) / factorial(i + i));
		}
    return ret;
}
int main(void){
    float number, rad, cos;
    scanf("%f",&number);
	rad = (number * 3.1415)/180;
	cos = cosinus (rad);
    printf("\n%0.3f", cos);
    return 0;
}


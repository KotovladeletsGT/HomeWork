#include <stdio.h>
int main(void)
{
int a, b, c, d;

    scanf ("%d", &a);
    b = a%10;
    c = (a/10)%10;
    d = (a/100)%10;
    
    
    b = (c>b) ? c : b;
    b = (d>b) ? d : b;
   
    printf("%d", b);
    return 0;
}


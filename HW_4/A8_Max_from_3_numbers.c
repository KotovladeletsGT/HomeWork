#include <stdio.h>
int main(void)
{
	int a, b, c;

    scanf ("%d%d%d", &a,&b,&c);
    
    a = (b>a) ? b : a;
    a = (c>a) ? c : a;
    printf("%d", a);
    return 0;
}

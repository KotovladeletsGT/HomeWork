#include <stdio.h>
int main(void)
{
	int a, b, c, d, e;

    scanf ("%d%d%d%d%d", &a,&b,&c,&d,&e);
    
    a = (b<a) ? b : a;
    a = (c<a) ? c : a;
    a = (d<a) ? d : a;
    a = (e<a) ? e : a;
    printf("%d", a);
    return 0;
}

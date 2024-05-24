#include <stdio.h>
int main(void)
{
	int a, b, c, d, e, f, g ;

    scanf ("%d%d%d%d%d", &a,&b,&c,&d,&e);
    
	f = a;
	f = (b>f) ? b : f;
	f = (c>f) ? c : f;
	f = (d>f) ? d : f;
	f = (e>f) ? e : f;
		
	g = a;
	g = (b<g) ? b : g;
	g = (c<g) ? c : g;
	g = (d<g) ? d : g;
	g = (e<g) ? e : g;
		
	f=f+g;
		
    printf("%d", f);
    return 0;
}

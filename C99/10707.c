#include <stdio.h>
#include <stdlib.h>

int main()    {
	int a, b, c, d, p;
	int x, y;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &p);
	
	x = a * p;
	
	if(c >= p)    {
	    y = b;
	}
	else    {
	    y = b + (p - c) * d;
	}
	
	if(x < y)    {
	    printf("%d", x);
	}
	else    {
	    printf("%d", y);
	}
	
	return 0;
}
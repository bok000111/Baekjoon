#include <stdio.h>
#include <math.h>

int main()    {
	int a, b, c, d;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	if(a + d > b + c)    {
	    printf("%d", b + c);
	}
	else    {
	    printf("%d", a + d);
	}
	
	return 0;
}
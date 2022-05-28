#include <stdio.h>
#include <stdlib.h>

int main()    {
	int a = 0, b = 0, c = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a + b + c != 180)    {
	    printf("Error");
	}
	
	else if(a == b && b == c)    {
	    printf("Equilateral");
	}
	
	else if(a == b || b == c || c == a)    {
	    printf("Isosceles");
	}
	
	else    {
	    printf("Scalene");
	}
	
	return 0;
}
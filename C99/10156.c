#include <stdio.h>

int main()    {
	int A = 0, B = 0, C = 0;
	
	scanf("%d %d %d", &A, &B, &C);
	
	if(A * B - C < 0)    {
	    printf("0");
	}
	else    {
	    printf("%d", A * B - C);
	}
	
	return 0;
}
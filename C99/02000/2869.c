#include <stdio.h>

int main()
{
    int A, B ,V;
    int i, day;
    
    scanf("%d %d %d", &A, &B, &V);
    
    if (A == V) {
		printf("%d", 1);
		return 0;
	}

	if ((V - A) % (A - B)) {
		day = (V - A) / (A - B)+ 1;
	}
	else {
		day = (V - A) / (A - B);
	}
	
	printf("%d\n", day + 1);

	return 0;
}
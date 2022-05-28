#include <stdio.h>
int main() {
	
	int n;
	int m=0;
	
	scanf("%d", &n);
	
	for ( int i=0; i <n; i++) {
		m=n-i;
	    printf("%d\n", m);
	}
	
	return 0;
}
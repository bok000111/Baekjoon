#include <stdio.h>
int main() {
	
	int i, t;
	
	scanf("%d", &t);
	
	for( i=1; i <= t; i++) {
		for ( int j=1; j <= i; j++ ) {
		printf( "*" );
		}
		printf("\n");
	}
	
	return 0;
}
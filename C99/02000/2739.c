#include <stdio.h>

int main() {

	int n, m;
    
	scanf("%d", &n);
	
	for( m=1; m<10; m++ ) {
    printf("%d * %d = %d\n", n, m, n*m );
	}
	
	return 0;
}
#include <stdio.h>
int main() {
	
	int a, b;
	
	while ( (a + b) != 0) {
	
	    scanf ( "%d %d", &a, &b );
	    if ( ( a + b ) == 0 )
	        break;
		printf ( "%d\n" , a + b );
	}
	
    return 0;
}
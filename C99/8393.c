#include <stdio.h>
int main() {
	
	int n;
	int m=0;
	
	scanf("%d", &n);
	
	for ( int i=1; i <=n; i++) {
		m+=i;
	}
	
	printf("%d", m);
	
	return 0;
}
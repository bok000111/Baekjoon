#include <cstdio>

int main() {
	
	int n, m;
	
	while(1) {
		scanf("%d %d", &n, &m);
		
		if(n == 0 && m == 0) {
			break;
		}
		
		if((n % m) == 0) {
			printf("multiple\n");
		}
		else if((m % n) == 0) {
			printf("factor\n");
		}
		else {
			printf("neither\n");
		}
	}
	
	return 0;
}
#include <stdio.h>

int main() {
	
	int a, b, c, x, y, z;
	
	scanf("%d %d" ,&a, &x);
	scanf("%d %d" ,&b, &y);
	scanf("%d %d" ,&c, &z);
	
	int n;
	n = (a * y + b * z + c * x);
	n = n - (x * b + y * c + z * a);
	
	if(n == 0) {
		printf("0");
	}
	if(n > 0) {
		printf("1");
	}
	if(n < 0) {
		printf("-1");
	}

	return 0;
}
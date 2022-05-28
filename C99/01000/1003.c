#include <stdio.h>
#include <stdlib.h>

int memo[42];

int fibo(int n) {
	
	if(n < 2) {
		return n;
	}
	if(memo[n] != 0) {
		return memo[n];
	}
	else {
		memo[n] = fibo(n - 1) + fibo(n - 2);
	}
	return memo[n];
}


int main() {
	int n;
	int num;

	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		if(num == 0) {
			printf("1 0\n");
		}
		else {
			printf("%d %d\n", fibo(num - 1), fibo(num));
		}
	}
	
	return 0;
}
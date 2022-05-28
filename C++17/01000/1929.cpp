#include<stdio.h>

int main() {
    int n, m;
    int num[1000001] = {0};

	scanf("%d %d", &m, &n);
	
	for (int i = 0; i <= n; i++) {
		num[i] = i;
	}
	
	num[0] = 0;
	num[1] = 0;

	for (int i = 2; i <= n; i++) {
		if (num[i] != 0) {
			for (int j = 2 * i; j <= n; j += i) {
				num[j] = 0;
			}
		}
	}

	for (int i = m; i <= n; i++) {
		if (num[i] != 0) {
			printf("%d\n", num[i]);
		}
	}
	
	return 0;
}
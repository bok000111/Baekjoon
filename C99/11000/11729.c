#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int by, int end) {
	if (n == 1)
		printf("%d %d\n", start, end);
	else {
		hanoi(n - 1, start, end, by);
		printf("%d %d\n", start, end);
		hanoi(n - 1, by, start, end);
	}
}

int main() {
	int n;
	int m;

	scanf("%d", &n);
	
	m = pow(2, n) - 1;
	printf("%d\n", m);

	hanoi(n, 1, 2, 3);

	return 0;
}
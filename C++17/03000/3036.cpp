#include <cstdio>

int gcd(int a, int b) {
	int tmp;
	while (b)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main()
{
	int r[101];
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &r[i]);
	}
	
	for(int i = 1; i < n; i++) {
		printf("%d/%d\n", r[0]/gcd(r[0], r[i]), r[i]/gcd(r[0], r[i]));
	}
	
	return 0;
}
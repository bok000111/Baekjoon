#include <cstdio>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int m[1000001];
	m[1] = 1;
	m[2] = 2;
	
	for(int i = 3; i <= n; i++) {
		m[i] = (m[i-1] + m[i-2]) % 15746;
	}
	
	printf("%d", m[n]);
	
	return 0;
}
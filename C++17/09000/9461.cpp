#include <cstdio>

long long arr[101];

long long padovan(int n) {
	if(n <= 3) {
		return 1;
	}
	if(arr[n] != 0) {
		return arr[n];
	}
	else {
		arr[n] = padovan(n - 2) + padovan(n - 3);
		return arr[n];
	}
}

int main()
{
	int n, m;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &m);
		printf("%lld\n", padovan(m));
	}
	
	return 0;
}
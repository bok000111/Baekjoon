#include <cstdio>

long long m[32][32];

long long dp(long long n, long long r) {
	if(r == 0) {
		return 1ll;
	}
	if(n == r) {
		return 1ll;
	}
	if(m[n][r] == 0) {
		m[n][r] = dp(n-1, r) + dp(n-1, r-1);
	}
	return m[n][r];
}
	
int main()
{
	int t;
	long long n, r;
	
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++) {
		scanf("%lld %lld", &r, &n);
		printf("%lld\n", dp(n, r));
	}
	
	return 0;
}
#include <cstdio>

long long m[1001][1001];

long long dp(long long n, long long r) {
	if(r == 0) {
		return 1ll;
	}
	if(n == r) {
		return 1ll;
	}
	if(m[n][r] == 0) {
		m[n][r] = (dp(n-1, r) + dp(n-1, r-1))%10007;
	}
	return m[n][r];
}
	
int main()
{
	long long n, r;
	scanf("%lld %lld", &n, &r);
	printf("%lld\n", dp(n, r));
	
	return 0;
}
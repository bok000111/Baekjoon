#include <cstdio>
#include <cmath>
#include <algorithm>

long long num5(long long n) {
	long long n_5 = 0;
	for(long long i = 5; i <= n; i *= 5) {
		n_5 += n / i;
	}
	return n_5;
}

long long num2(long long n) {
	long long n_2 = 0;
	for(long long i = 2; i <= n; i *= 2) {
		n_2 += n / i;
	}
	return n_2;
}

int main() {
	long long n, r;
	long long n2, n5;
	
	scanf("%lld %lld", &n, &r);
	
	n5 = num5(n) - num5(n-r) - num5(r);
	n2 = num2(n) - num2(n-r) - num2(r);
	
	printf("%lld", std::min(n2, n5));
	
	return 0;
}
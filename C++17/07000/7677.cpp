#include <iostream>
#include <map>

std::map<long long, long long> a;
const long long mod = 10000LL;

long long fibo(long long n) {
	if(n == 0) {
		return 0;
	}
	if(n <= 2) {
		return 1;
	}
	else if (a.count(n) == 0) {
		if(n % 2) {
			long long m = (n + 1)/2;
			long long t1 = fibo(m);
			long long t2 = fibo(m - 1);
			a[n] = (t1*t1 + t2*t2) % mod;
		}
		else {
			long long m = n / 2;
			long long t1 = fibo(m);
			long long t2 = fibo(m-1);
			a[n] = (t1 * (t1 + 2ll*t2)) % mod;
        }
	}
	return a[n];
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	while (1) {
		long long n;
		std::cin >> n;
		if (n == -1) {
			break ;
		}
		std::cout << fibo(n) << '\n';
	}
	return 0;
}
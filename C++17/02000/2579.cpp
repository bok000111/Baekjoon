#include <iostream>
#include <algorithm>

int m[301];
int a[301];

int dp(int n) {
	if(!m[n]) {
		m[n] = std::max(dp(n-2)+a[n], dp(n-3)+a[n-1]+a[n]);
	}
	return m[n];
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	
	std::cin >> n;
	
	for(int i = 1; i <= n; i++) {
		std::cin >> a[i];
	}
	
	m[1] = a[1];
	m[2] = a[1] + a[2];
	m[3] = std::max(a[1]+a[3], a[2]+a[3]);
	
	std::cout << dp(n);
	
	return 0;
}
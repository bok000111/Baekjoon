#include <iostream>

int m[12];

int dp(int n) {
	if(!m[n]) {
		m[n] = dp(n-1) + dp(n-2) + dp(n-3);
	}
	return m[n];
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, tmp;
	
	m[1] = 1;
	m[2] = 2;
	m[3] = 4;
	
	std::cin >> n;
	
	for(int i = 0; i < n; i++) {
		std::cin >> tmp;
		std::cout << dp(tmp) << '\n';
	}
	
	return 0;
}
#include <iostream>

int m[1001];

int dp(int n) {
	if(!m[n]) {
		m[n] = (dp(n-1)+2*(dp(n-2)))%10007;
	}
	return m[n];
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n, tmp;
	
	m[1] = 1;
	m[2] = 3;
	m[3] = 5;
	
	std::cin >> n;
	std::cout << dp(n);
	
	return 0;
}
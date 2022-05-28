#include <iostream>
#include <algorithm>

int m[10001];
int a[10001];
/*
int dp(int n) {
	if(!m[n]) {
		m[n] = std::max(dp(n-2)+a[n], dp(n-3)+a[n-1]+a[n]);
		m[n] = std::max(m[m-1], m[n]);
	}
	return m[n];
}
*/
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
	
	for(int i = 3; i <= n; i++) {
		m[i] = std::max(m[i-3]+a[i-1]+a[i], m[i-2]+a[i]);
		m[i] = std::max(m[i-1], m[i]);
	}
	
	std::cout << m[n];
	
	return 0;
}
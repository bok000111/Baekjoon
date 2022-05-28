#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	long long m[91];
	
	std::cin >> n;
	
	m[1] = 1;
	m[2] = 1;
	
	for(int i = 3; i <= n; i++) {
		m[i] = m[i-1] + m[i-2];
	}
	
	std::cout << m[n];
	
	return 0;
}
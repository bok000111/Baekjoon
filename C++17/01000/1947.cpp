#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	
	long long m[1000001];
	m[2] = 1;
	m[3] = 2;
	
	std::cin >> n;
	
	for(int i = 4; i <= n; i++) {
		m[i] = (i-1) * (m[i-1] + m[i-2]) %1000000000;
	}
	
	std::cout << m[n];
	
	return 0;
}
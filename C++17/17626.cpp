#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	int m[50001] = {0,};
	
	std::cin >> n;
	
	for(int i = 1; i <= n; i++) {
		m[i] = 4;
		for(int j = 1; j*j <= i; j++) {
			m[i] = std::min(m[i-(j*j)]+1, m[i]);
		}
	}
	
	std::cout << m[n];
	
	return 0;
}
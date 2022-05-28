#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int m[10][101];
	int n;
	
	m[0][1] = 0;
	for(int i = 1; i < 10; i++) {
		m[i][1] = 1;
	}
	
	std::cin >> n;
	
	for(int i = 2; i <= n; i++) {
		for(int j = 0; j <= 9; j++) {
			if(j == 0) {
				m[0][i] = m[1][i-1];
			}
			else if(j == 9) {
				m[9][i] = m[8][i-1];
			}
			else {
				m[j][i] = (m[j-1][i-1] + m[j+1][i-1])%1000000000;
			}
		}
	}
	
	int res = m[0][n];
	
	for(int i = 1; i <= 9; i++) {
		res += m[i][n];
		res %= 1000000000;
	}
	
	std::cout << res;
	
	return 0;
}
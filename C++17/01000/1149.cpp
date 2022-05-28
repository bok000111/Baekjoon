#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int a[3][1000];
	int dp[3][1000];
	
	int n;
	
	std::cin >> n;
	
	for(int i = 0; i < n; i++) {
		std::cin >> a[0][i] >> a[1][i] >> a[2][i];
	}
	
	dp[0][0] = a[0][0];
	dp[1][0] = a[1][0];
	dp[2][0] = a[2][0];
	
	for(int i = 1; i < n; i++) {
		dp[0][i] = std::min(dp[1][i-1], dp[2][i-1]) + a[0][i];
		dp[1][i] = std::min(dp[0][i-1], dp[2][i-1]) + a[1][i];
		dp[2][i] = std::min(dp[0][i-1], dp[1][i-1]) + a[2][i];
	}
	
	std::cout << std::min({dp[0][n-1], dp[1][n-1], dp[2][n-1]});
	
	return 0;
}
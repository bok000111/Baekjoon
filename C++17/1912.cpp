#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int num;
	int n[100001];
	int dp[100001];
	
	std::cin >> num;
	
	for(int i = 0; i < num; i++) {
		std::cin >> n[i];
	}
	
	dp[0] = n[0];
	int m = dp[0];
	
	for(int i = 1; i < num; i++) {
		dp[i] = std::max(dp[i-1] + n[i], n[i]);
		m = std::max(dp[i], m);
	}
	
	std::cout << m;
	
	return 0;
}
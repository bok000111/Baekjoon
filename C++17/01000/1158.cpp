#include <iostream>
#include <vector>
#include <queue>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	std::queue<int> q;
	std::vector<int> sol;
	int n, k;
	
	std::cin >> n >> k;
	
	for(int i = 1; i <= n; i++) {
		q.emplace(i);
	}
	int s = q.size();
	s--;
	while(s--) {
		for(int i = 1; i < k; i++) {
			q.emplace(q.front());
			q.pop();
		}
		sol.emplace_back(q.front());
		q.pop();
	}
	sol.emplace_back(q.front());
	
	
	std::cout << '<';
	for(int i = 0; i < n-1; i++) {
		std::cout << sol[i] << ", ";
	}
	std::cout << sol.back() << '>';
	
	return 0;
}
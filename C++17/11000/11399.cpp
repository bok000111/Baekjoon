#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	int a[1001];
	
	std::cin >> n;
	
	for(int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	
	std::sort(a, a + n);
	
	int res = 0;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			res += a[j];
		}
	}
	
	std::cout << res;
	
	return 0;
}
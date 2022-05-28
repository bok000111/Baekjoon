#include <iostream>

long long a, b, c;

long long r(long long b) {
	if(b == 1) {
		return a%c;
	}
	long long tmp = r(b/2)%c;
	
	if(b%2) {
		return tmp*tmp%c*a%c;
	}
	else {
		return tmp*tmp%c;
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	std::cin >> a >> b >> c;
	
	std::cout << r(b);
	
	return 0;
}
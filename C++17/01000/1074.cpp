#include<iostream>

int n, c, r;
int ans;

void z(int n, int c, int r) {
	if (n == 0) return;

	int size = 1 << n;
	int nxt = size / 2;

	if(c / nxt == 0 && r / nxt == 0) {
		ans += nxt * nxt * 0;
		z(n - 1, c % nxt, r % nxt);
	}
	else if(c / nxt == 0 && r / nxt == 1) {
		ans += nxt * nxt * 1;
		z(n - 1, c % nxt, r % nxt);
	}
	else if(c / nxt == 1 && r / nxt == 0) {
		ans += nxt * nxt * 2;
		z(n - 1, c % nxt, r % nxt);
	}
	else {
		ans += nxt * nxt * 3;
		z(n - 1, c % nxt, r % nxt);
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	std::cin >> n >> c >> r;
	z(n, c, r);
	std::cout << ans;
	
	return 0;
}
#include <iostream>

int arr[2187][2187];
int a = 0, b = 0, c = 0;

int isSame(int x, int y, int n) {
	if(n == 1) {
		return arr[x][y];
	}
	int tmp = arr[x][y];
	for(int i = x; i < x+n; i++) {
		for(int j = y; j < y+n; j++) {
			if(tmp != arr[i][j]) {
				return 0;
			}
		}
	}
	return tmp;
}

void rec(int x, int y, int n) {
	int s = isSame(x, y, n);
	if(s == 1) {
		a++;
		return;
	}
	else if(s == 2) {
		b++;
		return;
	}
	else if(s == 3) {
		c++;
		return;
	}
	else {
		for(int i = x; i < x+n; i += n/3) {
			for(int j = y; j < y+n; j += n/3) {
				rec(i, j, n/3);
			}
		}
		return;
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n, tmp;
	
	std::cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			std::cin >> tmp;
			arr[i][j] = tmp+2;
		}
	}
	
	rec(0, 0, n);
	
	std::cout << a << '\n' << b << '\n' << c;
	
	return 0;
}
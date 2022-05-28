#include <iostream>

int n[129][129];
int w = 0, b = 0;

int isSame(int x, int y, int num) {
	if(num == 1) {
		return n[x][y];
	}
	int tmp = n[x][y];
	for(int i = x; i < x+num; i++) {
		for(int j = y; j < y+num; j++) {
			if(tmp != n[i][j]) {
				return -1;
			}
		}
	}
	return tmp;
}

void rec(int x, int y, int num) {
	int s = isSame(x, y, num);
	if(s == 0) {
		w++;
		return;
	}
	else if(s == 1) {
		b++;
		return;
	}
	else {
		rec(x, y, num/2);
		rec(x+num/2, y, num/2);
		rec(x, y+num/2, num/2);
		rec(x+num/2, y+num/2, num/2);
		return;
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int num, tmp;
	
	std::cin >> num;
	
	for(int i = 0; i < num; i++) {
		for(int j = 0; j < num; j++) {
			std::cin >> tmp;
			n[i][j] = tmp;
		}
	}
	
	rec(0, 0, num);
	
	std::cout << w << '\n' << b;
	
	return 0;
}
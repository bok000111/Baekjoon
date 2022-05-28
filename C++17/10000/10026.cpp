#include <iostream>

char graph[100][100];
bool visit[100][100];
int n;

int dfs1(int r, int c, char a) {
	if(r < 0 || r >= n || c < 0 || c >= n) {
		return 0;
	}
	if(!visit[r][c] && graph[r][c] == a) {
		visit[r][c] = true;
		dfs1(r, c-1, a);
		dfs1(r, c+1, a);
		dfs1(r-1, c, a);
		dfs1(r+1, c, a);
		return 1;
	}
	return 0;
}

int dfs2(int r, int c) {
	if(r < 0 || r >= n || c < 0 || c >= n) {
		return 0;
	}
	if(graph[r][c] == 'R' || graph[r][c] == 'G') {
		graph[r][c] = '0';
		dfs2(r-1, c);
		dfs2(r+1, c);
		dfs2(r, c-1);
		dfs2(r, c+1);
		return 1;
	}
	return 0;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	char tmp;
	int R = 0, G = 0, B = 0, RG = 0;
	
	std::cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			std::cin >> graph[i][j];
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			R += dfs1(i, j, 'R');
			G += dfs1(i, j, 'G');
			B += dfs1(i, j, 'B');
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			RG += dfs2(i, j);
		}
	}
	
	std::cout << R + G + B << ' ' << RG + B;
	
	return 0;
}
#include <iostream>

char graph[50][50];
int n, m;

int dfs1(int r, int c) {
	if(r < 0 || r >= n || c < 0 || c >= m) {
		return 0;
	}
	if(graph[r][c] == '-') {
		graph[r][c] = '0';
		dfs1(r, c-1);
		dfs1(r, c+1);
		return 1;
	}
	return 0;
}

int dfs2(int r, int c) {
	if(r < 0 || r >= n || c < 0 || c >= m) {
		return 0;
	}
	if(graph[r][c] == '|') {
		graph[r][c] = '0';
		dfs2(r-1, c);
		dfs2(r+1, c);
		return 1;
	}
	return 0;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	char tmp;
	int cnt = 0;
	
	std::cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			std::cin >> tmp;
			graph[i][j] = tmp;
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cnt += dfs1(i, j);
			cnt += dfs2(i, j);
		}
	}
	
	std::cout << cnt;
	
	return 0;
}
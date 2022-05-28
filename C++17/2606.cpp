#include <iostream>

int map[101][101];
int visit[101];
int n, cnt = 0;

void dfs(int node) {
	visit[node] = 1;
	for(int i = 1; i <= n; i++) {
		if(!visit[i] && map[node][i]) {
			cnt++;
			dfs(i);
		}
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int a, b, m;
	
	std::cin >> n;
	std::cin >> m;
	
	for(int i = 0; i < m; i++) {
		std::cin >> a >> b;
		map[a][b] = map[b][a] = 1;
	}
	
	dfs(1);
	
	std::cout << cnt;
	
	return 0;
}
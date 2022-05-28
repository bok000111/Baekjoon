#include <iostream>

int map[1001][1001];
int visit[1001];
int n, cnt = 0;

bool dfs(int node) {
	if(!visit[node]) {
		visit[node] = 1;
		
		for(int i = 1; i <= n; i++) {
			if(map[node][i]) {
				dfs(i);
			}
		}
		return true;
	}
	return false;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int a, b, m;
	
	std::cin >> n >> m;
	
	for(int i = 0; i < m; i++) {
		std::cin >> a >> b;
		map[a][b] = map[b][a] = 1;
	}
	
	for(int i = 1; i <= n; i++) {
		if(dfs(i)) {
			cnt++;
		}
	}
	
	std::cout << cnt;
	
	return 0;
}
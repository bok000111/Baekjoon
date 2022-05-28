#include <cstdio>

int n,m;
int arr[9];

void dfs(int depth) {
	if(depth == m) {
		for(int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i = 1; i <= n; i++) {
		arr[depth] = i;
		dfs(depth+1);
	}
}

int main() {
    scanf("%d %d", &n, &m);
    dfs(0);
}
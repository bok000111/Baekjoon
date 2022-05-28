#include <cstdio>
#include <algorithm>

int n,m;
int a[9];
int num[9];
bool visit[9];

void dfs(int depth) {
	if(depth == m) {
		for(int i = 0; i < m; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	}
	int ex = -1;
	for(int i = 0; i < n; i++) {
		if(!visit[i] && ex != num[i]) {
			if(!depth || a[depth-1] <= num[i] ) {
				a[depth] = num[i];
				ex = num[i];
				dfs(depth+1);
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++) {
	   scanf("%d", &num[i]);
	}
	
	std::sort(num, num+n);
	
    dfs(0);
}
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
	
	for(int i = 0; i < n; i++) {
		//if(!depth || num[i] > a[depth-1]) {
			//visit[i] = true;
			a[depth] = num[i];
			dfs(depth+1);
			//visit[i] = false;
		//}
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
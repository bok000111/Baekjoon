#include <cstdio>

int n;
int num[11];
int cnt[4];
int min = 1000000001;
int max = -1000000001;

void dfs(int res, int depth) {
	if(depth == n) {
		if(res > max) {
			max = res;
		}
		if(res < min) {
			min = res;
		}
		return;
	}
	
	for(int i = 0; i < 4; i++) {
		if(cnt[i] > 0) {
			cnt[i]--;
			if(i == 0) {
				dfs(res + num[depth], depth + 1);
			}
			if(i == 1) {
				dfs(res - num[depth], depth + 1);
			}
			if(i == 2) {
				dfs(res * num[depth], depth + 1);
			}
			if(i == 3) {
				dfs(res / num[depth], depth + 1);
			}
			cnt[i]++;
		}
	}
}

int main() {
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	
	for(int i = 0; i < 4; i++) {
	scanf("%d", &cnt[i]);
	}
	
	dfs(num[0], 1);
	
	printf("%d\n%d", max, min);
}
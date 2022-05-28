#include <cstdio>
#include <algorithm>

int m[501][501];
int a[501][501];
int n;

int dp(int i, int j) {
	if(i == n-1) {
		return a[i][j];
	}
	
	if(m[i][j] == -1) {
		m[i][j] = std::max(dp(i+1, j), dp(i+1, j+1)) + a[i][j];
	}
	return m[i][j];
}


int main()
{
	for(int i = 0; i < 501; i++) {
		for(int j = 0; j < 501; j++) {
			m[i][j] = -1;
		}
	}
	
	
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("%d", dp(0, 0));
	
	return 0;
}
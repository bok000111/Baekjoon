#include <cstdio>
#include <cstdlib>
#include <algorithm>

int main() {
	int n, m;
	
	scanf("%d", &n);
	
	int* num = (int*)calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	
	std::sort(num, num + n);
	
	scanf("%d", &m);
	
	int* fnd = (int*)calloc(m, sizeof(int));
	
	for(int i = 0; i < m; i++) {
		scanf("%d", &fnd[i]);
	}
	
	int* a;
	int* b;
	
	for(int i = 0; i < m; i++) {
		a = std::upper_bound(num, num + n, fnd[i]);
		b = std::lower_bound(num, num + n, fnd[i]);
		printf("%d ", std::distance(b, a));
	}
	
	return 0;
}
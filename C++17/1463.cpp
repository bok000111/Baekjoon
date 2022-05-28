#include <cstdio>
#include <algorithm>

int main()
{
	int n;
	int m[1000001];
	m[1] = 0;
	
	scanf("%d", &n);
	
	for(int i = 2; i <= n; i++) {
		m[i] = m[i - 1] + 1;
		
		if(i % 2 == 0) {
			m[i] = std::min(m[i], m[i / 2] + 1);
		}
		
		if(i % 3 == 0) {
			m[i] = std::min(m[i], m[i / 3] + 1);
		}
	}
	
	printf("%d", m[n]);
	
	return 0;
}
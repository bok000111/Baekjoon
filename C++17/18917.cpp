#include <cstdio>

int main()
{
	int m, q, tmp;
	long long sum = 0ll;
	long long x = 0ll;
	
	scanf("%d", &m);
	
	for(int i = 0; i < m; i++) {
		scanf("%d", &q);
		
		switch (q) {
			case 1:
				scanf("%d", &tmp);
				sum += tmp;
				x ^= tmp;
				continue;
			case 2:
				scanf("%d", &tmp);
				sum -= tmp;
				x ^= tmp;
				continue;
			case 3:
				printf("%lld\n", sum);
				continue;
			case 4:
				printf("%lld\n", x);
				continue;
		}
	}
	
	return 0;
}
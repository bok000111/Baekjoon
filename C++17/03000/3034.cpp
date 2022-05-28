#include <cstdio>

int main()
{
	int n, w, h;
	int tmp;
	
	scanf("%d %d %d", &n, &w, &h);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		if((tmp * tmp) <= (w * w) + (h * h)) {
			printf("DA\n");
		}
		else {
			printf("NE\n");
		}
	}
	
	return 0;
}
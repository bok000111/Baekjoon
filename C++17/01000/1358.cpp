#include <cstdio>
#include <utility>

int main()
{
	int w, h, x, y, p;
	int cnt = 0;
	int x1, y1;
	
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);
	int r = h / 2;
	
	for(int i = 0; i < p; i++) {
		
		scanf("%d %d", &x1, &y1);
		
		if(x1 <= x + w && x1 >= x) {
			if(y1 >= y && y1 <= y + h) {
				cnt++;
			}
		}
		else if(x1 < x) {
			if((x-x1)*(x-x1)+(y+r-y1)*(y+r-y1) <= r*r) {
				cnt++;
			}
		}
		else {
			if((x+w-x1)*(x+w-x1)+(y+r-y1)*(y+r-y1) <= r*r) {
				cnt++;
			}
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}
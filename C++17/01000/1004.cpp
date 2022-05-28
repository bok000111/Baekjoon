#include <cstdio>
#include <vector>
#include <utility>

class circle {
	public:
	int x = 0;
	int y = 0;
	int rad = 0;
	
	void input(int a, int b, int c) {
		x = a;
		y = b;
		rad = c;
	}
	
	bool isin(int a, int b) {
		if((x-a) * (x-a) + (y-b) * (y-b) < rad * rad) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main()
{
	int n, m;
	int a, b, c;
	int x1, y1, x2, y2;
	int cnt;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		cnt = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &m);
		std::vector<circle> v(m);
		
		for(int j = 0; j < m; j++) {
			scanf("%d %d %d", &a, &b, &c);
			v[j].input(a, b, c);
			
			if(v[j].isin(x1, y1) ^ v[j].isin(x2, y2)) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	
	
	return 0;
}
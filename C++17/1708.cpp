#include <cstdio>
#include <algorithm>
#include <stack>

typedef struct coord {
	int x, y;
	int p = 0, q = 0;
	
} crd;

bool cmp(const crd& a, const crd& b) {
	if((long long)a.p*b.q != (long long)a.q*b.p) {
		return(long long)a.p*b.q > (long long)a.q*b.p;
	}
	if(a.y != b.y) {
		return a.y < b.y;
	}
	return a.x < b.x;
}

long long ccw(const crd& a, const crd& b, const crd& c) {
	long long tmp;
	tmp = ((long long)a.x*b.y + (long long)b.x*c.y + (long long)c.x*a.y) - ((long long)a.y*b.x + (long long)b.y*c.x + (long long)c.y*a.x);
	return tmp;
}

int main()
{
	int n;
	int tmpx, tmpy;
	crd a[100001];
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &tmpx, &tmpy);
		a[i].x = tmpx;
		a[i].y = tmpy;
	}
	
	std::sort(a, a + n, cmp);
	
	for (int i = 1; i < n; ++i)
	{
		a[i].p = a[i].x - a[0].x;
		a[i].q = a[i].y - a[0].y;
	}
	
	std::sort(a + 1, a + n, cmp);
	
	std::stack<int> s;
	
	int fst = 0, snd = 1, nxt = 2;
	s.push(fst);
	s.push(snd);
	
	while(nxt < n) {
		while(s.size() >= 2) {
			snd = s.top();
			s.pop();
			fst = s.top();
		
			if(ccw(a[fst], a[snd], a[nxt]) > 0) {
				s.push(snd);
				break;
			}
		}
		s.push(nxt++);
	}
	
	printf("%d", s.size());
	
	return 0;
}
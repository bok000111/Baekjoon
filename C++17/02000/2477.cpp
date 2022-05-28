#include <cstdio>
#include <utility>

std::pair<int, int> a[7];

int main()
{
	a[0] = {0, 0};
	
	int n, dir, tmp, res;
	
	scanf("%d", &n);
	
	for(int i = 1; i < 7; i++) {
		scanf("%d %d", &dir, &tmp);
		
		switch(dir) {
			case 1:
				a[i] = {a[i-1].first+tmp, a[i-1].second};
				break;
			case 2:
				a[i] = {a[i-1].first-tmp, a[i-1].second};
				break;
			case 3:
				a[i] = {a[i-1].first, a[i-1].second-tmp};
				break;
			case 4:
				a[i] = {a[i-1].first, a[i-1].second+tmp};
				break;
		}
	}
	
	res = a[0].first*a[1].second + a[1].first*a[2].second + a[2].first*a[3].second + a[3].first*a[4].second + a[4].first*a[5].second + a[5].first*a[6].second;
	
	res -= a[0].second*a[1].first + a[1].second*a[2].first + a[2].second*a[3].first + a[3].second*a[4].first + a[4].second*a[5].first + a[5].second*a[6].first;
	
	if(res < 0) {
		res *= -1;
	}
	
	printf("%d", n*res/2);
	return 0;
}
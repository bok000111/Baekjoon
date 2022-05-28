#include <cstdio>
#include <set>

int main()
{
	int tmp;
	int n, m;
	
	std::set<int> a;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		a.insert(tmp);
	}
	
	for(int i = 0; i < m; i++) {
		scanf("%d", &tmp);
		if(a.count(tmp)) {
			a.erase(tmp);
		}
		else {
			a.insert(tmp);
		}
	}
	
	printf("%d", a.size());
	
	return 0;
}
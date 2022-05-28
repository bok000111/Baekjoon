#include <iostream>
#include <cstdio>
#include <vector>

int main()
{
	int n;
	int a;
	std::vector<int> v;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		if(a) {
			v.push_back(a);
		}
		else {
			v.pop_back();
		}
	}
	int len = v.size();
	int sum = 0;
	
	for(int i = 0; i < len; i++) {
		sum += v[i];
	}
	
	printf("%d", sum);
}
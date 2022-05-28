#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> a, b;
	
	int n, m;
	int num;
	std::string str;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++) {
		std::cin >> str;
		a.push_back(str);
	}
	
	std::sort(a.begin(), a.end());
	
	for(int i = 0; i < m; i++) {
		std::cin >> str;
		if(std::binary_search(a.begin(), a.end(), str)) {
			num++;
		}
	}
	
	printf("%d", num);

	return 0;
}
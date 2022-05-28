#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

int main()
{
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	
	int n, m;
	std::string tmp;
	
	std::set<std::string> d;
	std::vector<std::string> result;
	
	std::cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		std::cin >> tmp;
		d.insert(tmp);
	}
	
	for(int i = 0; i < m; i++) {
		std::cin >> tmp;
		if(d.count(tmp)) {
			result.push_back(tmp);
		}
	}
	
	std::sort(result.begin(), result.end());
	
	
	std::cout << result.size() << '\n';
	
	for(int i = 0; i < result.size(); i++) {
		std::cout << result[i] << '\n';
	}
	
	
	return 0;
}
#include <iostream>
#include <map>
#include <string>
#include <set>

int main()
{
	std::multimap<std::string, std::string> mm;
	std::set<std::string> keyset;
	int n, m;
	int res;
	std::string key, val;
	
	
	std::cin >> n;
	
	for(int i = 0; i < n; i++) {
		std::cin >> m;
	
		for(int j = 0; j < m; j++) {
			
			std::cin >> val >> key;
			
			mm.insert({key, val});
			keyset.insert(key);
		}
		
		int res = 1;
		for(auto iter: keyset) {
			res *= (mm.count(iter) + 1);
		}
		res--;
		
		keyset.clear();
		mm.clear();
	
		std::cout << res << '\n';
	}
	
	return 0;
}
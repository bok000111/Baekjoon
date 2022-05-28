#include <iostream>
#include <map>
#include <string>

int main()
{
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	std::string tmp;
	
	std::map<int, std::string> map;
	std::map<std::string, int> num;
	
	std::cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		std::cin >> tmp;
		map.insert(make_pair(i + 1, tmp));
		num.insert(make_pair(tmp, i + 1));
	}
	
	for(int i = 0; i < m; i++) {
		std::cin >> tmp;
		if(tmp.front() >= 'A') {
			std::cout << num[tmp] << "\n";
		}
		else {
			std::cout << map[stoi(tmp)] << "\n";
		}
	}
	
	return 0;
}
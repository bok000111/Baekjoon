#include <iostream>
#include <map>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int a, b;
	std::string s1, s2;
	std::map<std::string, std::string> m;
	
	
	std::cin >> a >> b;
	
	for(int i = 0; i < a; i++) {
		std::cin >> s1 >> s2;
		m.insert({s1, s2});
	}
	
	for(int i = 0; i < b; i++) {
		std::cin >> s1;
		
		std::cout << m[s1] << '\n';
	}
	
	return 0;
}
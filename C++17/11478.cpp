#include <cstdio>
#include <iostream>
#include <set>
#include <string>

int main()
{
	std::string tmp;
	std::string input;
	
	std::set<std::string> sub;
	
	std::cin >> input;
	
	for(int i = 0; i < input.size(); i++) {
		for(int j = 1; j <= input.size() - i; j++) {
			sub.insert(input.substr(i, j));
		}
	}
	
	std::cout << sub.size();
	
	return 0;
}
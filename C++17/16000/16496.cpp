#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool cmp(std::string a, std::string b) {
	std::string tmp = a;
	
	a += b;
	b += tmp;
	
	
	return std::atoll(a.c_str()) > std::atoll(b.c_str());
}

int main()
{
	int n;
	std::vector<std::string> v;
	std::string tmp;
	
	std::cin >> n;
	
	for(int i = 0; i < n; i++) {
		std::cin >> tmp;
		v.push_back(tmp);
	}
	
	std::sort(v.begin(), v.end(), cmp);
	
	if(v.front().front() == '0') {
		std::cout << '0';
	}
	else {
		for(auto iter: v) {
			std::cout << iter;
		}
	}
	
	
	return 0;
}
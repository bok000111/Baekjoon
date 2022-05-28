#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	std::string in;
	int t, n;
	bool m[21];
	
	std::cin >> t;
	
	for(int i = 0; i < t; i++) {
			
		std::cin >> in;
		
		if(in == "add") {
			std::cin >> n;
			m[n] = 1;
		}
		
		else if(in == "remove") {
			std::cin >> n;
			m[n] = 0;
		}
		
		else if(in == "check") {
			std::cin >> n;
			std::cout << m[n] << '\n';
		}
		
		else if(in == "toggle") {
			std::cin >> n;
			m[n] ^= 1;
		}
		
		else if(in == "all") {
			for(int i = 1; i < 21; i++) {
				m[i] = 1;
			}
		}
		
		else if(in == "empty") {
			for(int i = 1; i < 21; i++) {
				m[i] = 0;
			}
		}
	}
	
	return 0;
}
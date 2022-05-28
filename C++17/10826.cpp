#include <iostream>
#include <string>
#include <algorithm>

std::string s[10001];

std::string add(std::string a, std::string b) {
	long long sum = 0;
	std::string res;
	
	while(a.size() || b.size() || sum){
		if(a.size()) {
			sum += a.back() - '0';
			a.pop_back();
		}
		
		if(b.size()) {
			sum += b.back() - '0';
			b.pop_back();
		}
		
		res.push_back((sum % 10) + '0');
		sum /= 10;
    }
		
	std::reverse(res.begin(), res.end());
	return res;
}

std::string fibo(int n) {
	if(s[n] == "") {
		s[n] = add(fibo(n-1), fibo(n-2));
	}
	return s[n];
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	s[0] = "0";
	s[1] = "1";
	s[2] = "1";
	s[3] = "2";
	
	std::cin >> n;
	
	std::cout << fibo(n);
		
	return 0;
}
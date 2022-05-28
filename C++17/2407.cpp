#include <iostream>
#include <string>
#include <algorithm>

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

std::string m[101][101];

std::string dp(int n, int r) {
	if(n == r || r == 0) {
		return "1";
	}
	
	if(m[n][r] == "") {
		m[n][r] = add(dp(n-1, r), dp(n-1, r-1));
	}
	
	return m[n][r];
}
	
int main()
{
	int n, r;
	std::cin >> n >> r;
	std::cout << dp(n, r);
	return 0;
}
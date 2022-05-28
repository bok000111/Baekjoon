#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int arr[1000001];
	vector<int> tmp;
	
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		tmp.push_back(arr[i]);
	}
	
	sort(tmp.begin(), tmp.end());
	
	tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
	
	for(int i = 0; i < n; i++) {
		printf("%d ", lower_bound(tmp.begin(), tmp.end(), arr[i]) - tmp.begin());
	}
	
	return 0;
}
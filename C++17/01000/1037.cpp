#include <cstdio>
#include <algorithm>

int main()
{
	int arr[51];
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr + n);
	
	printf("%d", arr[0] * arr[n - 1]);
	
	return 0;
}
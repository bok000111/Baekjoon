#include <cstdio>
#include <algorithm>

int main()
{
	int n = 0;
	
	scanf("%d", &n);
	
	int* arr = (int*)calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n);
	
	int m = 0;
	scanf("%d", &m);
	
	int* num = (int*)calloc(m, sizeof(int));
	
	for(int i = 0; i < m; i++) {
		scanf("%d", &num[i]);
	}
	
	for(int i = 0; i < m; i++) {
		if(std::binary_search(arr, arr+n, num[i])) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	
	free(arr);
	free(num);
	return 0;
}
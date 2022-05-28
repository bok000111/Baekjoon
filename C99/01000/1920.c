#include <stdio.h>

int cmp(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) {
        return -1;
    }
    else if (num1 > num2) {
        return 1;
    }
    return 0;
}

int search(int arr[], int start, int end, int n) {
	int mid = (start + end) / 2;
	if(start > end) {
		return 0;
	}
	if(n < arr[mid]) {
		return search(arr, start, mid - 1, n);
	}
	else if(n > arr[mid]) {
		return search(arr, mid + 1, end, n);
	}
	return 1;
}

int main() {
    int n, m;
    int arr_n[100000];
    int arr_m[100000];
    int res;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	scanf("%d", &arr_n[i]);
    }

    qsort(arr_n, n, sizeof(int), cmp);
    
	scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        scanf("%d", &arr_m[i]);
        res = search(arr_n, 0, n - 1, arr_m[i]);
        printf("%d\n", res);
    }
    
    return 0;
}
#include <stdio.h>

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
    int arr[1001] = {0};
    int n = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(arr[j - 1] > arr[j]) {
                swap(&arr[j - 1], &arr[j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    
    return 0;
}
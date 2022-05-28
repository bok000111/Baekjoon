#include <stdio.h>

typedef struct person {
	int x;
	int y;
	int rank;
} per;

int main() {
    int n;
    per arr[50];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	scanf("%d %d", &arr[i].x, &arr[i].y);
    	arr[i].rank = 1;
    }
    
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		if(arr[i].x < arr[j].x && arr[i].y < arr[j].y) {
    			arr[i].rank++;
    		}
    	}
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i].rank);
    }

    return 0;
}
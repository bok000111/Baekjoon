#include <stdio.h>

struct coord {
	int x;
	int y;
};

typedef struct coord crd;

crd sort[100000];

void merge_x(crd *arr, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;
	
	while(i <= mid && j <= end) {
		if((arr + i) -> x <= (arr + j) -> x) {
			sort[k] = *(arr + i);
			i++;
		}
		else {
			sort[k] = *(arr + j);
			j++;
		}
		k++;
	}
	
	if(i > mid) {
		for(int t = j; t <= end; t++) {
			sort[k] = *(arr + t);
			k++;
		}
	}
	else {
		for(int t = i; t <= mid; t++) {
			sort[k] = *(arr + t);
			k++;
		}
	}
	
	for(int t = start; t <= end; t++) {
		*(arr + t) = sort[t];
	}
}


void mergeSort_x(crd *arr, int n, int m) {
	if(n < m) {
		int mid = (n + m) / 2;
		
		mergeSort_x(arr, n, mid);
		mergeSort_x(arr, mid + 1, m);
		
		merge_x(arr, n, mid, m);
	}
}


void merge_y(crd *arr, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;
	
	while(i <= mid && j <= end) {
		if((arr + i) -> y <= (arr + j) -> y) {
			sort[k] = *(arr + i);
			i++;
		}
		else {
			sort[k] = *(arr + j);
			j++;
		}
		k++;
	}
	
	if(i > mid) {
		for(int t = j; t <= end; t++) {
			sort[k] = *(arr + t);
			k++;
		}
	}
	else {
		for(int t = i; t <= mid; t++) {
			sort[k] = *(arr + t);
			k++;
		}
	}
	
	for(int t = start; t <= end; t++) {
		*(arr + t) = sort[t];
	}
}


void mergeSort_y(crd *arr, int n, int m) {
	if(n < m) {
		int mid = (n + m) / 2;
		
		mergeSort_y(arr, n, mid);
		mergeSort_y(arr, mid + 1, m);
		
		merge_y(arr, n, mid, m);
	}
}


int main() {
    int n;
    crd num[100000];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	scanf("%d %d", &num[i].x, &num[i].y);
    }
    
    mergeSort_x(&num, 0, n - 1);
    mergeSort_y(&num, 0, n - 1);
    
    for(int i = 0; i < n; i++) {
    	printf("%d %d\n", num[i].x, num[i].y);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct member {
	int age;
	char name[101];
} mem;

void merge(mem* arr, int fst, int mid, int lst) {
	int i = fst;
	int j = mid + 1;
	int k = 0;
	
	mem*sort = (mem*)malloc(sizeof(mem) * (lst - fst + 1));
	
	while(i <= mid && j <= lst) {
		if((arr + i) -> age <= (arr + j) -> age) {
			sort[k] = arr[i];
			i++;
		}
		else {
			sort[k] = arr[j];
			j++;
		}
		k++;
	}
	
	if(i > mid) {
		for(int m = j; m <= lst; m++) {
			sort[k] = arr[m];
			k++;
		}
	}
	else {
		for(int m = i; m <= mid; m++) {
			sort[k] = arr[m];
			k++;
		}
	}
	
	for(int m = fst; m <= lst; m++) {
		arr[m] = sort[m - fst];
	}
	
	free(sort);
}

void mergeSort(mem* arr, int fst, int lst) {
		if(fst < lst) {
			int mid = (fst + lst) / 2;
			
			mergeSort(arr, fst, mid);
			mergeSort(arr, mid + 1, lst);
			
			merge(arr, fst, mid, lst);
		}
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    mem*arr = (mem*)malloc(sizeof(mem) * n);
    
    for(int i = 0; i < n; i++) {
    	scanf("%d %s", &arr[i].age, &arr[i].name);
    }
    
   mergeSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++) {
    	printf("%d %s\n", arr[i].age, arr[i].name);
    }
    
    free(arr);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    else {
    	return 0;
    }
}

int mean(int* list, int n) {
	double sum = 0;
	for(int i = 0; i < n; i ++) {
		sum += list[i];
	}
	return round(sum / n);
}

int median(int* list, int n) {
	return list[(n + 1) / 2 - 1];
}

int mode(int* list, int n) {
	int num[8001] = { 0 };
	int i, x;
	int max = 0;
	int cnt = 0;

	for (i = 0; i < n; i++) {
		x = list[i] + 4000;
		num[x]++;
		
		if (num[x] > max) {
			max = num[x];
		}
	}

	for (i = 0, x = 0; i < 8001 ; i++) {
		if (num[i] == 0) {
			continue;
		}

		if (num[i] == max) {
			if (cnt == 0) {
				x = i;
				cnt ++;
			}
			else if (cnt == 1) {
				x = i;
				break;
			}
		}
	}
	return x - 4000;
}

int range(int* list, int n) {
	return list[n - 1] - list[0];
}
	
int main() {
    int n;
    
    scanf("%d", &n);
    
    int* list = (int*)calloc(n, sizeof(int));
    
    for(int i = 0; i < n; i++) {
    	scanf("%d", &list[i]);
    }
    
    qsort(list, n, sizeof(int), cmp);
    
    printf("%d\n", mean(list, n));
    printf("%d\n", median(list, n));
    printf("%d\n", mode(list, n));
    printf("%d\n", range(list, n));
    
    
  
    free(list);
    
    return 0;
}
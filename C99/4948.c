#include<stdio.h>

int prime(int m) {
    int n;
    int num[1000001] = {0};
    int count = 0;
	
	n = 2 * m;
	
	for (int i = 0; i <= n; i++) {
		num[i] = i;
	}
	
	num[0] = 0;
	num[1] = 0;

	for (int i = 2; i <= n; i++) {
		if (num[i] != 0) {
			for (int j = 2 * i; j <= n; j += i) {
				num[j] = 0;
			}
		}
	}

	for (int i = m + 1; i <= n; i++) {
		if (num[i] != 0) {
			count++;
		}
	}
	
	return count;
}

int main() {
    int n, t;
    
    for(;;) {
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        printf("%d\n", prime(n));
    }
    
    return 0;
}
    
    
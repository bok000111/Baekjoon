#include<stdio.h>

void goldbach(int n) {
    int num[10001] = {0};
	
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
	
	for(int i = n / 2; i > 0; i--) {
	    if(num[n - num[i]] != 0) {
	        printf("%d %d\n", i, n - i);
	        break;
	    }
	}
}

int main() {
    int n, m;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &m);
        goldbach(m);
    }
    
    return 0;
}
    
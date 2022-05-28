#include<stdio.h>

int factor(int n) {	
	int i = 2, count = 0;
	
	while(n > 1) {
	    while(n % i == 0) {
	        n /= i;
	        count++;
	    }
	    i++;
	}
	return count;
}

int main() {
    int n;
    int num[100];
    int res = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        num[i] = factor(num[i]);
        
        if(num[i] == 1) {
            res++;
        }
    }
    
    printf("%d", res);
    
    return 0;
}
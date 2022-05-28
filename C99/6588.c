#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
	if(n == 1) {
		return 0;
	}
	else if(n == 2) {
		return 1;
	}
	else {
		int rt = (int)pow(n, 0.5);
		
		for(int i = 2; i <= rt; i++) {
			if(n % i == 0) {
				return 0;
			}
		}
		return 1;
	}	
}

int main() {
    int n;
    int a, b;
    
    while(1) {
    	scanf("%d", &n);
    	
    	if(n == 0) {
    		break;
    	}
    	
    	for(int i = 3; i < n; i++) {
    		if(isPrime(i) && isPrime(n - i)) {
    			a = i;
    			b = n - i;
    			break;
    			}
    	}
    	printf("%d = %d + %d\n", n, a, b);
    }
    return 0;
}
#include <stdio.h>

int rev(int n) {
	int r = 0;
	
	while (n != 0) {
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	
	return r;
}

int main() {
    int n = 0;
    
    while(1) {
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        
        if(n == rev(n)) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}
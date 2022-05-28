#include <stdio.h>
#include <stdlib.h>

int n_666(int x) {
	
	if(x < 666) {
		return 0;
	}
	
	if((x % 10) == 6 && ((x / 10) % 10) == 6 && ((x / 100) % 10) == 6) {
		return 1;
	}
	else if(((x / 10) % 10) == 6 && ((x / 100) % 10) == 6 && ((x / 1000) % 10) == 6) {
		return 1;
	}
	else if(((x / 100) % 10) == 6 && ((x / 1000) % 10) == 6 && ((x / 10000) % 10) == 6) {
		return 1;
	}
	else if(((x / 1000) % 10) == 6 && ((x / 10000) % 10) == 6 && ((x / 100000) % 10) == 6) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
    int n;
    int i = 0, j = 0;
    
    scanf("%d", &n);
    
    for(i = 0; ; i++) {
    	if(n_666(i) == 1) {
    		j++;
    	}
    	if(j == n) {
    		break;
    	}
    }
    
    printf("%d", i);

    return 0;
}
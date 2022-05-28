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
    int n, m;
    int num[10000];
    int sum = 0;
    int res = 100000;
    
    scanf("%d", &m);
    scanf("%d", &n);
    
    for(int i = m; i <= n; i++) {
        num[i] = factor(i);
        if(num[i] == 1) {
            sum += i;
            if(i < res) {
                res = i;
            }
        }
    }
    
    if (sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n%d", sum, res);
    }
    
    return 0;
}
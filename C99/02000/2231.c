#include <stdio.h>

int sum(int n) {
    int res = 0;
    
    if(n < 10) {
        return n ;
    }
    
    return  n % 10 + sum(n / 10);
}

int main() {
    int n;
    int res = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        if(n == i + sum(i)) {
            res = i;
            break;
        }
    }
    
    printf("%d", res);
    
    return 0;
}  
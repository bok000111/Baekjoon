#include <stdio.h>

int main() {
    int n, k;
    int res = 1;
    
    scanf("%d %d", &n, &k);
    
    for(int i = k + 1; i <= n; i++) {
        res *= i;
    }
    for(int i = 1; i <= n - k; i++) {
        res /= i;
    }
    
    printf("%d", res);
    
    return 0;
}
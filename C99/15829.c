#include <stdio.h>
#include <string.h>

long long mod_31(int n) {
    int i = 0;
    long long res = 1;
    
    for(i = 0; i < n; i++) {
        res *= 31;
        res %= 1234567891;
    }
    return res;
}


int main() {
    int n;
    char arr[51];
    
    long long res = 0;
    long long M = 1234567891;
    
    scanf("%d", &n);
    scanf("%s", &arr);
    
    for(int i = 0; i < n; i++) {
        res += (arr[i] - 96) * mod_31(i);
        res %= M;
    }
    
    printf("%lld", res);
    
    return 0;
}  
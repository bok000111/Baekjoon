#include <stdio.h>

int Euc(int a, int b) {
    int r = a % b;
    if (r == 0) {
      return b;
    }
    return Euc(b, r);
}

int main() {
    int n;
    int a, b;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	scanf("%d %d", &a, &b);
    	printf("%d\n", a * (b / Euc(a, b)));
    }
    
    return 0;
}
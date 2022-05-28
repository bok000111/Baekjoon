#include <stdio.h>
#include <math.h>

int Euclidean(int a, int b) {
    int r = a % b;
    if (r == 0) {
      return b;
    }
    return Euclidean(b, r);
}

int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    int a = Euclidean(n, m);
    
    printf("%d\n%d", a, n * m / a);
    
    
    return 0;
}
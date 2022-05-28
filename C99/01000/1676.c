#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int n_2 = 0;
    int n_5 = 0;
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 5; j++) {
            if(i % (int)pow(5, (float)j) == 0) {
                n_5++;
            }
        }
    }
    
    printf("%d", n_5);
    
    return 0;
}
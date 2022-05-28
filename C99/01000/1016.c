#include <stdio.h>
#include <math.h>

long long num[1000001];
 
int main() {
 
    long long max, min;
    
    int cnt = 0;
 
    scanf("%lld %lld", &min, &max);
    
    long long sq_max = (long long)sqrt(max);
 
    for(long long i = 2; i <= sq_max; i++) {
        
        long long x = min / (i * i);
        
        if (min % (i * i) != 0) {
        	x++;
        }
        
        while(x * (i * i) <= max) {
            num[x * (i * i) - min] = 1;
            x++;
        }
    }
    
    for(int i = 0; i <= max - min; i++) {
        if (num[i] == 0) {
        	cnt++;
        }
    }
 
 
    printf("%d\n", cnt);
    return 0;
}
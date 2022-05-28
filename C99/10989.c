#include <stdio.h>
#include <stdlib.h>
	
int main() {
    int n, m;
    int num[10001] = {};
    
    scanf("%d", &n);
    
    
    for(int i = 0; i < n; i++) {
    	scanf("%d", &m);
    	num[m]++;
    }
    
    for(int i = 1; i < 10001; i++) {
    	for(int j = 0; j < num[i]; j++) {
    		printf("%d\n", i);
    	}
    }
    
    return 0;
}
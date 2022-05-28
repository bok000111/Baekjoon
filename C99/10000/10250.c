#include <stdio.h>

int main()
{
    int h, w ,n;
    int t;
    
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        
        scanf("%d %d %d", &h, &w, &n);
    
	    if(n % h != 0) {
	        printf("%d%02d\n", n % h,  n / h + 1);
	    }
	    else {
	        printf("%d%02d\n", h, n / h);
	    }
    }

	return 0;
}
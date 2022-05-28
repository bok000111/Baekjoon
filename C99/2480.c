#include <stdio.h>

int main() {

	int a, b, c;
    int m=0;
    
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b && b==c) {
	    m+=((a*=1000)+10000);
	}
	else if(a==b || a==c) {
	    m+=((a*100)+1000);
	}
	else if(b==c) {
	    m+=((b*100)+1000);
	}
	else {
        if(a>b && a>c) {
	        m+=a*100;
        }
    	else if(b>c) {
	        m+=b*100;
    	}
    	else {
	        m+=c*100;
	    }
	}
	printf("%d", m);
	return 0;
}
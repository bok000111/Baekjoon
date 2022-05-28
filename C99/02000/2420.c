#include <stdio.h>
#include <stdlib.h>

int main()    {
	long long n = 0, m = 0;
	
	scanf("%lld %lld", &n, &m);
	
	if(n >= m)  {
	    printf("%lld", n - m);
	}
	
	else   {
	    printf("%lld", m - n);
	}
	
	return 0;
}
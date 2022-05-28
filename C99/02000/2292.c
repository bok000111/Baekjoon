#include <stdio.h>
#include <string.h>   

int func(int n)    {
    if(n == 1)    {
        return 1;
    }
    else    {
        return func(n - 1) + (6 * n) - 6;
    }
}

int main()    {
	int m = 0;
	int i = 0;
	
	scanf("%d", &m);
	
	if(m == 1)    {
	    printf("1");
	}
	else    {
	    for(i = 1; i < 100000; i++)    {
	        if(func(i) < m && m <= func(i + 1)) {
	            printf("%d", i + 1);
	            break;
	        }
	    }
	}
	return 0;
}
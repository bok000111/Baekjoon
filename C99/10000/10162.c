#include <stdio.h>

int main()    {
	int time = 0;
	int a = 0, b = 0, c = 0;
	
	scanf("%d", &time);
	
	if(time % 10 != 0)    {
	    printf("-1");
	    
	    return 0;
	}
	
	else    {
	    while(time >= 300)    {
	        time -= 300;
	        a++;
	    }
	    
	    while(time >= 60)    {
	        time -= 60;
	        b++;
	    }
	    
	    while(time >= 10)    {
	        time -= 10;
	        c++;
	    }
	}
	
	printf("%d %d %d", a, b, c);
	
	return 0;
}
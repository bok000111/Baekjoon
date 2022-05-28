#include <stdio.h>


int hansu(int n)    {
    if(n < 100)    {
        return 1;
    }
    else if(n == 1000)    {
        return 0;
    }
    else if((n / 100) - ((n / 10) % 10) == ((n / 10) % 10) - (n % 10))    {
        return 1;
    }
    else    {
        return 0;
    }
}

int main()    {
	int n = 0;
	int i = 0;
	int sum = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i < n + 1; i++)    {
	    sum += hansu(i);
	}
	
	printf("%d", sum);
	
	return 0;
}
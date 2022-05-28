#include <stdio.h>


int self(int n)    {
    if(n < 10)    {
        return n;
    }
    else    {
        return n % 10 + self(n / 10);
    }
}

int func(int n)    {
    return n + self(n);
}

int main()    {
	int n = 0;
	int i = 0;
	
	int arr[20000];
	
	for(i = 1; i < 10001; i++)    {
	    arr[i] = i;
	}
	
	for(i = 1; i < 10001; i++)    {
	    arr[func(i)] = 0;
	}
	
	for(i = 1; i < 10001; i++)    {
	    if(arr[i] != 0)    {
	        printf("%d\n", arr[i]);
	    }
	}
	
	return 0;
}
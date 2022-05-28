#include <stdio.h>
#include <string.h>   

int score(char arr_input[], int n)    {
    int sum = 0;
    int j = 0;
    
    for(int i = 0; i < n; i++)    {
	    if(arr_input[i] == 'O')    {
	        sum += (j + 1);
	        j++;
	    } 
	    else    {
	        j = 0;
	    }
	}
	return sum;
}

int main()    {
	char arr[81];
	int n = 0;	
	
	scanf("%d", &n);
	getchar();
	
	for(int i = 0; i < n; i++)    {
	    gets(arr);
	    printf("%d\n", score(arr, strlen(arr)));
	}
	
	return 0;
}
#include <stdio.h>

float func(int arr[], int n)    {
    float avr = 0.0;
    int sum = 0;
    float res = 0.0;
    
    for(int i = 0; i < n; i++)    {
        sum += arr[i];
    }
    avr = (float) sum / n;
    
    for(int i = 0; i < n; i++ )    {
        if(arr[i] > avr)    {
            res++;
        }
    }
    
    return res * 100 / n;
}

int main()    {
	int n = 0;
	int m = 0;
	int arr_input[1005];
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)    {
	    
	    scanf("%d", &m);
	    
	    for(int j = 0; j < m; j++)    {
	        scanf("%d", &arr_input[j]);
	    }
	    
	    printf("%.3f%%\n", func(arr_input, m));
	}
	return 0;
}
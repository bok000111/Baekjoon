#include <stdio.h>
#include <limits.h>

int main()

{
	int i, n;
	int max = INT_MIN;
	int min = INT_MAX;
	int arr[1000001];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
	   scanf("%d", &arr[i] );
	   
	   if(max < arr[i])
	   {
	       max = arr[i];
	   }
	   
	   if(min > arr[i])
	   {
	       min = arr[i];
	   }
	}
	
	   printf("%d %d", min, max);
	
	return 0;
}
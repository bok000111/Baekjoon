#include <stdio.h>
#include <limits.h>

int main()

{
	int i, n;
	float sum = 0.0f;
	int max = INT_MIN;
	int arr[1001];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
	   scanf("%d", &arr[i] );
	   
	   if(max < arr[i])
	   {
	       max = arr[i];
	   }
	   sum += arr[i];
	}
	
	   printf("%f", (sum * 100) / (max * n));
	
	return 0;
}
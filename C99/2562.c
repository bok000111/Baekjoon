#include <stdio.h>
#include <limits.h>

int main()

{
	int i, n, index;
	int max = INT_MIN;
	int arr[10];
	
	for(i = 0; i < 9; i++)
	{
	   scanf("%d", &arr[i] );
	   
	   if(max < arr[i])
	   {
	       max = arr[i];
	       index = i+1;
	   }
	   
	}
	
	   printf("%d\n%d", max, index);
	
	return 0;
}
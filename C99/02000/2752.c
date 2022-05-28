#include <stdio.h>

int main()
{
	int arr[3];
	int set;
	
	for(int i = 0; i < 3; i++)
	{
	    scanf("%d", &arr[i]);
	}
	
	if(arr[0] <= arr[1] && arr[0] <= arr[2])
	{
	    if(arr[1] <= arr[2])
	    {
	        printf("%d %d %d", arr[0], arr[1], arr[2]);
	    }
	    else
	    {
	        printf("%d %d %d", arr[0], arr[2], arr[1]);
	    }
	}
	
	else if(arr[1] <= arr[0] && arr[1] <= arr[2])
	{
	    if(arr[0] <= arr[2])
	    {
	        printf("%d %d %d", arr[1], arr[0], arr[2]);
	    }
	    else
	    {
	        printf("%d %d %d", arr[1], arr[2], arr[0]);
	    }
	}
	
	else
	{
	    if(arr[0] <= arr[1])
	    {
	        printf("%d %d %d", arr[2], arr[0], arr[1]);
	    }
	    else
	    {
	        printf("%d %d %d", arr[2], arr[1], arr[0]);
	    }
	}
	
	return 0;
}
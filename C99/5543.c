#include <stdio.h>

int main()
{
	int arr[5];
	int set;
	
	for(int i = 0; i < 5; i++)
	{
	    scanf("%d", &arr[i]);
	}
	
	if(arr[0] <= arr[1] && arr[0] <= arr[2])
	{
	    if(arr[3] <= arr[4])
	    {
	        set = arr[0] + arr[3] - 50;
	    }
	    else
	    {
	        set = arr[0] + arr[4] - 50;
	    }
	}
	
	else if(arr[1] <= arr[0] && arr[1] <= arr[2])
	{
	    if(arr[3] <= arr[4])
	    {
	        set = arr[1] + arr[3] - 50;
	    }
	    else
	    {
	        set = arr[1] + arr[4] - 50;
	    }
	}
	
	else
	{
	    if(arr[3] <= arr[4])
	    {
	        set = arr[2] + arr[3] - 50;
	    }
	    else
	    {
	        set = arr[2] + arr[4] - 50;
	    }
	}
	
	printf("%d", set);
	
	return 0;
}
#include <stdio.h>

int main()

{
	int i, n;
	int arr[6];
	int arr_m[6] = {1, 1, 2, 2, 2, 8};
	
	for(i = 0; i < 6; i++)
	{
	   scanf("%d", &arr[i] );
	   printf("%d ", arr_m[i] - arr[i]);
	}
	
	return 0;
}
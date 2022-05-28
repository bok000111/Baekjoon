#include <stdio.h>

int main()

{
	int i, a, b;
	int arr[6];
	
	scanf("%d %d", &a, &b);
	
	for(i = 0; i < 5; i++)
	{
	   scanf("%d", &arr[i] );
	   printf("%d ", arr[i] - (a * b));
	}
	
	return 0;
}
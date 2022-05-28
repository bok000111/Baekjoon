#include <stdio.h>

int main()
{
    int arr[5] = {0};
    int a = 0;
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        a += arr[i];
    }
    
    printf("%d", a);
    
	return 0;
}
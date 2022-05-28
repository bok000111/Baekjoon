#include <stdio.h>

int main()
{
    int arr[4] = {0};
    int a = 0;
    
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 4; i++)
    {
        a += arr[i];
    }
    
    printf("%d %d", a/60, a%60);
    
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()    {
    int arr[8];
    
    for(int i = 0; i < 8; i++)    {
        scanf("%d", &arr[i]);
    }
    
    if(arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3] && arr[3] < arr[4] && arr[4] < arr[5] && arr[5] < arr[6] && arr[6] < arr[7])    {
        printf("ascending");
    }
    else if(arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3] && arr[3] > arr[4] && arr[4] > arr[5] && arr[5] > arr[6] && arr[6] > arr[7])    {
        printf("descending");
    }
    else    {
        printf("mixed");
    }
    
    
    return 0;
}
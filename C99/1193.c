#include <stdio.h>

int main()
{
    int input = 0;
    int temp = 0;
    int i = 0;
    
    scanf("%d", &input);
    
    for(i = 0; ; i++)    {
        if((i * (i + 1)) / 2 < input && (i + 1) * (i + 2) / 2 >= input)    {
            break;
        }
    }
    
    temp = input - (i * (i + 1)) / 2;
    
    if(i % 2 == 0)    {
        printf("%d/%d", i + 2 - temp, temp);
    }
    else    {
        printf("%d/%d", temp, i + 2 - temp);
    }
    
    
    return 0;
}
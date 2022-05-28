#include <stdio.h>

int people(int k, int n)    {
    if(k == 0)    {
        return n;
    }
    else    {
        int sum = 0;
        for(int i = 1; i <= n; i++)    {
            sum += people(k - 1, i);
        }
        return sum;
    }
}

int main()
{
    int time = 0;
    int k = 0, n = 0;
    
    scanf("%d", &time);
    
    for(int i = 0; i < time; i++)    {
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", people(k, n));
    }
    
    return 0;
}
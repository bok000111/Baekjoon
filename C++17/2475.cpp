#include <stdio.h>

int main()
{
    int a, b, c, d, e, res;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    res = ((a*a) + (b*b) + (c*c) + (d*d) + (e*e)) % 10;
    
    printf("%d", res);
    
    return 0;
}
#include<stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double r;
    
    scanf("%lf", &r);
    
    printf("%lf\n%lf", M_PI * r * r, 2 * r * r);
    
    return 0;
}  
#include <stdio.h>
#include <math.h>

int main()    {
	float d, h, w;
	float H, W;
	
	scanf("%f %f %f", &d, &h, &w);
	
	H = floor(sqrt(  ((d * d) * (h * h)) / ((h * h) + (w * w))  ));
	W = floor(sqrt(  ((d * d) * (w * w)) / ((h * h) + (w * w))  ));
	
	printf("%.0f %.0f", H, W);
	
	return 0;
}
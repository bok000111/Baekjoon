#include <stdio.h>
#include <math.h>   

int main()    {
	char num[101];
	int i = 0, sum = 0;
	int n;
	
	scanf("%d", &n);
	getchar();
	gets(num);
	
	while((int)num[i] != '\0')    {
	    sum += (int)num[i] - 48;
	    i++;
	}
	
	printf("%d", sum);
	
	return 0;
}
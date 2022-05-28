#include <stdio.h>

int main()
{
	int n, x;
	
	scanf("%d %d", &n, &x);

	int m;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		
		if (m < x)
		    printf("%d ", m);
	}
	
	return 0;
}
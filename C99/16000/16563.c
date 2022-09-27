#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int* sieve = (int *)malloc(sizeof(int) * 5000001);
	for (int i = 2; i <= 5000000; i++)
    	sieve[i] = i;
  
  	for (int i = 2; i <= 2236; i++)
    	if (sieve[i] == i)
      		for (int j = i * i; j <= 5000000; j += i)
        		if (sieve[j] == j)
         			sieve[j] = i;

	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		while (m > 1)
		{
			printf("%d ", sieve[m]);
			m /= sieve[m];
		}
		printf("\n");
	}
	free(sieve);
}

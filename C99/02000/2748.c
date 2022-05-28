#include <stdio.h>


long long fibo_loop(long long num) {
		long long answer = 0;
		long long cur = 1;
		long long next = 1;
		
		for(long long i=1; i<=num; i++) {
			cur = next;
			next = answer;
			answer = next + cur;
		}
		return answer;
}

int main()
{
    long long n;
    
    scanf("%lld", &n);
    
    printf("%lld", fibo_loop(n));

	return 0;
}
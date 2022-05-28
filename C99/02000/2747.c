#include <stdio.h>


int fibo_loop(int num) {
		int answer = 0;
		int cur = 1;
		int next = 1;
		
		for(int i=1; i<=num; i++) {
			cur = next;
			next = answer;
			answer = next + cur;
		}
		return answer;
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    printf("%d", fibo_loop(n));

	return 0;
}
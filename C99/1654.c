#include <stdio.h>

int cmp(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) {
        return -1;
    }
    else if (num1 > num2) {
        return 1;
    }
    return 0;
}

long long sum(long long num[], long long n, long long a) {
	long long s = 0;
	for(int i = 0; i < n; i++) {
		s += (num[i] / a);
	}
	return s;
}

long long search(long long num[], long long n, long long m) {
	long long start = 1;
	long long end = num[n - 1];
	long long res;
	
	while(start <= end) {
		long long mid = (start + end) / 2;
		
		if(m > sum(num, n, mid)) {
			end = mid - 1;
		}
		else {
			res = mid;
			start = mid + 1;
		}
	}
	return res;
}

int main() {
    long long n, m;
    long long num[1000000];
    
    scanf("%lld %lld", &n, &m);
    
    for(int i = 0; i < n; i++) {
    	scanf("%lld", &num[i]);
    }

    qsort(num, n, sizeof(long long), cmp);
    
    printf("%lld", search(num, n, m));
    
    return 0;
}
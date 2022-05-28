#include <cstdio>
#include <queue>

int main()
{
	int n, k;
	std::queue<int> q;
	
	scanf("%d %d", &n, &k);
	
	for(int i = 1; i <= n; i++) {
		q.push(i);
	}
	
	printf("<");
	
	while(q.size() > 1) {
        for(int i = 0; i< k - 1; i++){
            q.push(q.front());
            q.pop();
        }
        
        printf("%d, ", q.front());
        q.pop();
    }
	
	printf("%d>", q.front());
	
	return 0;
}
#include <iostream>
#include <cstdio>

int main()
{
	int n;
	int a, b;
	
	std::cin >> n;
	
	for(int i = n; i > 0; i--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}
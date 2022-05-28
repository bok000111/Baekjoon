#include <stdio.h>

int main()    {
	int h = 0, m = 0, s = 0;
	int time = 0;
	
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &time);
	
	m += (s + time) / 60;
	s = (s + time) % 60;
	
	h += m / 60;
	m = m % 60;
	
	h  %= 24;
	
	printf("%d %d %d", h, m, s);
	
	return 0;
}
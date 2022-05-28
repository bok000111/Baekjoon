#include <stdio.h>

int main() {

	int h, m, reqm;

	scanf("%d %d", &h, &m);
	scanf("%d", &reqm);
	
	h += reqm/60;
	m += reqm%60;

	if(m>=60) {
		h++;
		m%= 60;
	}
	
    h%=24;
	
	printf("%d %d\n", h, m);
	
	return 0;
}
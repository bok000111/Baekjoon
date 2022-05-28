#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* x, const void* y) {
	char a = *(char*)x;
	char b = *(char*)y;
	
	return (int)b - (int)a;
}
		
int main() {
    int n, m;
    char num[11];
    
    scanf("%s", &num);
    
    qsort(num, strlen(num), sizeof(char), cmp);
    
    printf("%s", num);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int n, m;
    int* num = (int*)calloc(n, sizeof(int));
    
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++) {
    	scanf("%d", &num[i]);
    }

    qsort(num, n, sizeof(int), cmp);
    
    printf("%d", num[m - 1]);
    
    free(num);
    return 0;
}
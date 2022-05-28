#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if(num1 < num2) {
        return -1;
    }
    if(num1 > num2) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    int numArr[1000000] = {0};
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	scanf("%d", &numArr[i]);
    }

    qsort(numArr, n, sizeof(int), compare);

    for(int i = 0; i < n; i++) {
        printf("%d\n", numArr[i]);
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word {
	char x[51];
};

typedef struct word wrd;

int compare(wrd *a, wrd *b)
{
    if(strlen(a -> x) != strlen(b -> x)) {
    	return strlen(a -> x) - strlen(b -> x);
    }
    else {
    	return strcmp(a -> x, b -> x);
    }
}

int main() {
    int n;
    wrd arr[20000];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	scanf("%s", &arr[i].x);
    }

    qsort(arr, n, sizeof(wrd), compare);

    for(int i = 0; i < n; i++) {
        if(i > 0 && strcmp(arr[i].x, arr[i - 1].x) == 0) {
        	continue;
        }
        printf("%s\n", arr[i].x);
    }

    return 0;
}
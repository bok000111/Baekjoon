#include <stdio.h>
#include <string.h>
#include <math.h>

int group(char arr[]) {
	
	char alpha[26] = {0};
	
	int len = strlen(arr);
	
	if(len == 1) {
	    return 1;
	}
	
	for(int i = 0; i < len; i++) {
	    if(i == 0) {
	        alpha[arr[i] - 97]++;
	    }
	    else if(arr[i-1] != arr[i]) {
	        if(alpha[arr[i] - 97] > 0) {
	            return 0;
	        }
	        else {
	            alpha[arr[i] - 97]++;
	        }
	    }
	}
	return 1;
}


int main() {
	int n = 0;
	int res = 0;
	char arr[101];
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
	    scanf("%s", arr);
	    res += group(arr);
	}
	
	printf("%d", res);
	
	return 0;
}
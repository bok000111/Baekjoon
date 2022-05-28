#include<stdio.h>
#include<string.h>

int vps(char arr[]) {
    int temp = 0;
    
    int len = strlen(arr);
    
    for(int i = 0; i < len; i++) {
        if ((int) arr[i] == 40) {
            temp++;
        }
        else {
            temp--;
        }
        
        if (temp < 0) {
            return 0;
        }
    }
    if (temp == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n = 0;
    char arr[51];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%s", arr);
        
        if(vps(arr) == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    
    return 0;
}
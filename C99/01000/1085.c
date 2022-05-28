#include<stdio.h>

int main() {
    int x, y, w, h;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    w -= x;
    h -= y;
    
    if(x < y) {
        y = x;
    }
    else {
        x = y;
    }
    
    if(w < h) {
        h = w;
    }
    else {
        w = h;
    }
    
    if(x < w) {
        printf("%d", x);
    }
    else {
        printf("%d", w);
    }
    
    return 0;
}  
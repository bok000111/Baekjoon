#include <stdio.h>
#include <string.h>   

void func(char arr_input[], int len, int time)    {
    int i = 0, j = 0;
    
    for(i = 0; i < len; i++)    {
        for(j = 0; j < time; j++)    {
            printf("%c", arr_input[i]);
        }
    }
    printf("\n");
}

int main()    {
	char arr[21];
	int n = 0;
	int m = 0;	
	
	scanf("%d", &n);
	getchar();
	
	for(int i = 0; i < n; i++)    {
	    scanf("%d ", &m);
	    gets(arr);
	    func(arr, strlen(arr), m);
	}
	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()    {
    char arr[1000001];
    int res = 0;

    scanf("%[^\n]s", arr);

    if(arr[0] != ' ')    {
        res++;
    }

    for(int i = 1; i < strlen(arr); i++)    {
        if(arr[i - 1] == ' ' && arr[i] != ' ')    {
            res++;
        }
    }

    printf("%d", res);

    return 0;
}
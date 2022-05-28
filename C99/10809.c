#include <stdio.h>
#include <string.h>

int main()    {
    char arr[101];

    scanf("%s", arr);
    
    for(int j = 97; j < 123; j++)    {
            int locate = 999;
            
            for(int i = 0; i < strlen(arr); i++)    {
                if((int)arr[i] == j && i < locate)    {
                    locate = i;
                }
            }
            
            if(locate == 999)    {
                printf("-1 ");
            }
            else    {
                printf("%d ", locate);
            }
    }
    return 0;
}
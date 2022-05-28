#include<stdio.h>
#include<string.h>
int main()
{
    int num[26]={0},max=0,m,m2=-1;
    char array[1000001];
    scanf("%s",array);
    int len=strlen(array);
    for(int i=0;i<len;i++)
    {
        if(array[i]<'a')
            num[array[i]-65]++;
        else
            num[array[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
            m=i;
        }
        else if(num[i]==max)
            m=i,m2=i;
    }
    if(m==m2)
        printf("?");
    else
        printf("%c",m+65);
    return 0;
}

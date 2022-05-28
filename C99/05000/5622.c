#include <stdio.h>
#include <string.h>

int dial(char n)    {
    switch (n)    {
        case 'A':
        case 'B':
        case 'C':
            return 3;
        case 'D':
        case 'E':
        case 'F':
            return 4;
        case 'G':
        case 'H':
        case 'I':
            return 5;
        case 'J':
        case 'K':
        case 'L':
            return 6;
        case 'M':
        case 'N':
        case 'O':
            return 7;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return 8;
        case 'T':
        case 'U':
        case 'V':
            return 9;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            return 10;
    }
}

int main()    {
	int n = 0;
	int i = 0;
	int sum = 0;
	char arr[16];
	
	scanf("%s", arr);
	
	for(i = 0; i < strlen(arr); i++)    {
	    sum += dial(arr[i]);
	}
	printf("%d", sum);
	return 0;
}
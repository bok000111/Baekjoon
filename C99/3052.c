#include <stdio.h>

int arr_R[43];

int main(){
	int n;
	int res = 0;
	
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		arr_R[n % 42] = 1;
	}
	
	for(int i = 0; i < 42; i++)
	{
		res += arr_R[i];
	}
	
	printf("%d",res);
	
	return 0;
}
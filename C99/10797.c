#include <stdio.h>

int main()    {
	int day = 0;
	int arr_nums[5] = {};
	int res = 0;
	
	scanf("%d", &day);
	
	for(int i = 0; i < 5; i++)    {
	    scanf("%d", &arr_nums[i]);
	    
	    if(day == arr_nums[i]) {
	        res++;
	    }
	}
	
	printf("%d", res);
	
	return 0;
}
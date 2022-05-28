#include <stdio.h>
#include <stdlib.h>

int main()    {
	int day = 0, math = 0, kor = 0;
	int math_req = 0, kor_req = 0;
	
	scanf("%d", &day);
	scanf("%d", &kor_req);
	scanf("%d", &math_req);
	scanf("%d", &kor);
	scanf("%d", &math);
	
	if((kor_req + kor - 1) / kor > (math_req + math - 1) / math)    {
	    printf("%d", day - ((kor_req + kor - 1) / kor ));
	}
	
	else   {
	    printf("%d",day - ((math_req + math - 1) / math));
	}
	
	return 0;
}
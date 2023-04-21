#include <stdio.h>
int main()
{
	int sub1, sub2, sub3;
	printf("세 과목의 점수를 쓰시오:"); 
	scanf("%d %d %d", &sub1, &sub2, &sub3);
	
	if(sub1+sub2+sub3>=180)
	printf("합격");
	
	else
	printf("불합격");
	
	return 0; 
	
	}

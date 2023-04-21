#include <stdio.h>
int main()
{
	int age;
	
	printf("나이를 입력하시오:");
	scanf("%d", &age);
	
	if(age>=65)
	printf("요금은 무료입니다.\n");
	
	else if(age<65)
	printf("요금은 2000원입니다.\n");
	
	return 0; 
	
	}

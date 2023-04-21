#include <stdio.h>
int main()
{
	int numb1, numb2;
	char char1;
	
	printf("정수 연산자 정수 입력:");
	scanf("%d %c %d", &numb1, &char1, &numb2);
	
	if(char1 == '*')
	printf("%d",numb1*numb2);
	
	if(char1 == '/')
	printf("%d",numb1/numb2);
	
	if(char1 == '+')
	printf("%d",numb1+numb2);
	
	if(char1 == '-')
	printf("%d",numb1-numb2);
	
	return 0; 
	
	}

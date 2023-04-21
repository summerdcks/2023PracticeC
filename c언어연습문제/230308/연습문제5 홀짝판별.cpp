#include<stdio.h>
int main()
{
	int number;
	
	printf("숫자 입력:");
	scanf("%d", &number);
	
	switch(number%2)
{	case 1:
		printf("홀수입니다.");
	break;
	 
	case 0:
		printf("짝수입니다.");
	break;
	
	return 0;
}
}

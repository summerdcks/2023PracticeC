#include<stdio.h>
#include<limits.h>

int main()
{
	int number1, number2;
	
	printf("숫자 A 입력:");
	scanf("%d", &number1);
	printf("숫자 B 입력:");
	scanf("%d", &number2); 
	
	if(number1 > number2)
	printf("큰 숫자는 %d입니다.", number1);
	
	else if(number1 == number2)
	printf("큰 숫자는 %d입니다.", number1);
	
	else if	(number1 < number2)
	printf("큰 숫자는 %d입니다.", number2);
	
	return 0;
}

#include <stdio.h>
int main()
{ 
	int number1, number2, sum;
	
	printf("정수 두 개를 입력하세요:") ;
	scanf("%d %d", &number1, &number2) ;
	sum = number1 + number2;
	printf("입력하신 정수의 합은 %d입니다\n", number1 + number2);
	 
	return 0;
}

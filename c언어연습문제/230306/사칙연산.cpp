#include <stdio.h>

int main()
{
	int number1;
	int number2;
	int number3;
	
	printf("정수 두 개를 입력하시:"); 
	scanf("%d %d", &number1, &number2);
	
	sum = number1 + number2;
	minus = number1 - number2;
	mul = number1 * number2;
	div = number1 / number2;
	
	printf("%d + %d = %d\n", number1, number2, number3);
	printf("%d - %d = %d\n", number1, number2, number3);
	printf("%d * %d = %d\n", number1, number2, number3);
	printf("%d / %d = %d\n", number1, number2, number3);
	
	return 0;
}

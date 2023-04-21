#include <stdio.h>

int main()
{
	int number1;
	int number2;
	int sum, minus, mul, div;
	
	printf("정수를 두 개 입력하세요:"); 
	scanf("%d %d", &number1, &number2);
	
	sum = number1 + number2;
	minus = number1 - number2;
	mul = number1 * number2;
	div = number1 / number2;
	
	printf("%d + %d = %d\n", number1, number2, sum);
	printf("%d - %d = %d\n", number1, number2, minus);
	printf("%d * %d = %d\n", number1, number2, mul);
	printf("%d / %d = %d\n", number1, number2, div);
	
	return 0;
}

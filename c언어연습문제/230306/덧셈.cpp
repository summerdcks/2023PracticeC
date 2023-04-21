#include <stdio.h>

int main()
{
	int number1, number2;

	printf("정수를 두 개 더하세요:"); 
	scanf("%d %d", &number1, &number2);
	printf("%d\n", number1 + number2);
	
	return 0;
}

#include<stdio.h>
#include<limits.h>

int main()
{
	int number1, number2;
	
	printf("���� A �Է�:");
	scanf("%d", &number1);
	printf("���� B �Է�:");
	scanf("%d", &number2); 
	
	if(number1 > number2)
	printf("ū ���ڴ� %d�Դϴ�.", number1);
	
	else if(number1 == number2)
	printf("ū ���ڴ� %d�Դϴ�.", number1);
	
	else if	(number1 < number2)
	printf("ū ���ڴ� %d�Դϴ�.", number2);
	
	return 0;
}

#include <stdio.h>
int main()
{
	int number1;
	int number2;
	
	printf("�� ���� ������ �Է��ϼ���:");
	scanf("%d %d", &number1, &number2);
	
	printf("����� %d���Դϴ�.\n", (number1+number2)/2 );
	
	if(number1+number2 > 180)
	printf("������ A�Դϴ�.\n");
	
	else if(number1+number2 > 160)
	printf("������ B�Դϴ�.\n");
	
	else if(number1+number2 > 140)
	printf("������ C�Դϴ�.\n");
	
	else
	printf("������ F�Դϴ�.\n");
	
	return 0; 
}

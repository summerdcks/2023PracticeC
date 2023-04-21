#include <stdio.h>
int main()
{
	int i;
	int number1, number2;
	float result; 
	char oper;

	
	for(i = 1; i < 6; i++ )
	{
		printf("%d번째, 수식을 입력하세요 : ", i);
		scanf("%d %c %d", &number1, &oper, &number2);
		
		if(oper=='+') result=number1+number2;
		else if(oper=='-') result=number1-number2;	
		else if(oper=='*') result=number1*number2;	
		else if(oper=='/') result=(float)number1/number2;
			
			if(oper=='/')
			{
			printf("%d %c %d = %.2f입니다.\n\n", number1, oper, number2, result); 
			}
			else
			{
			printf("%d %c %d = %.0f입니다.\n\n", number1, oper, number2, result); 
			}
				
		
		
	}
	

	return 0; 
}

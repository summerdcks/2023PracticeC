#include <stdio.h>
int main()
{
	int numb1, numb2;
	char oper;
	
	printf("정수 연산자 정수 입력\n");
	printf("(예: 5 + 7) ");
	scanf("%d %c %d", &numb1, &oper, &numb2);
	
	switch(oper)
	{
		case '+':
		printf("%d %c %d = %d", numb1, oper, numb2, numb1+numb2);
		break;
		
		case '-':
		printf("%d %c %d = %d", numb1, oper, numb2, numb1-numb2);
		break;
		
		case '*':
		printf("%d %c %d = %d", numb1, oper, numb2, numb1*numb2);
		break;

		case '/':
		printf("%d %c %d = %d", numb1, oper, numb2, numb1/numb2);
		break;
		
	}
	 
}

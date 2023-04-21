#include <stdio.h>
int main()
{
	int number1;
	int number2;
	
	printf("두 개의 점수를 입력하세요:");
	scanf("%d %d", &number1, &number2);
	
	printf("평균은 %d점입니다.\n", (number1+number2)/2 );
	
	if(number1+number2 > 180)
	printf("성적은 A입니다.\n");
	
	else if(number1+number2 > 160)
	printf("성적은 B입니다.\n");
	
	else if(number1+number2 > 140)
	printf("성적은 C입니다.\n");
	
	else
	printf("성적은 F입니다.\n");
	
	return 0; 
}

#include <stdio.h>
int main()
{
	int number;
	
	scanf("%d", &number);
	
	if(number>90)	printf("성적은 A입니다.\n");
	
	if(number>80 && number<=90)	printf("성적은 B입니다.\n");
	
	if(number>70 && number<=80)	printf("성적은 C입니다.\n");
	
	if(number<=70)	printf("성적은 F입니다.\n");
	
	return 0; 
}

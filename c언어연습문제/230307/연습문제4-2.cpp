#include <stdio.h>
int main()
{
	int number;
	
	scanf("%d", &number);
	
	if(number>90)	printf("������ A�Դϴ�.\n");
	
	if(number>80 && number<=90)	printf("������ B�Դϴ�.\n");
	
	if(number>70 && number<=80)	printf("������ C�Դϴ�.\n");
	
	if(number<=70)	printf("������ F�Դϴ�.\n");
	
	return 0; 
}

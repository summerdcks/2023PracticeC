#include<stdio.h>
int main()
{
	int number;
	
	printf("���� �Է�:");
	scanf("%d", &number);
	
	switch(number%2)
{	case 1:
		printf("Ȧ���Դϴ�.");
	break;
	 
	case 0:
		printf("¦���Դϴ�.");
	break;
	
	return 0;
}
}

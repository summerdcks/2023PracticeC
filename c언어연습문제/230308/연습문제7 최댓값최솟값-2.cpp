#include<stdio.h>
#include<limits.h>

int main()
{
	int a, b, c, d, e;
	int max, min; 
	
	printf("���� A �Է�:");
	scanf("%d", &a);
	printf("���� B �Է�:");
	scanf("%d", &b); 
	printf("���� C �Է�:");
	scanf("%d", &c); 
	printf("���� D �Է�:");
	scanf("%d", &d); 
	printf("���� E �Է�:");
	scanf("%d", &e); 
	
	max=a;
	if(max<=b)
	max=b;
	if(max<=c)
	max=c;
	if(max<=d)
	max=d;
	if(max<=e)
	max=e;
	
	min=a;
	if(min>=b)
	max=b;
	if(min>=c)
	max=c;
	if(min>=d)
	max=d;
	if(min>=e)
	max=e;
	
	printf("�ִ밪�� %d�Դϴ�.\n", max);
	printf("�������� %d�Դϴ�.", min);
		
	return 0;
}

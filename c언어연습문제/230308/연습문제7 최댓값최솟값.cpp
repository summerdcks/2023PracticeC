#include<stdio.h>
#include<limits.h>

int main()
{
	int a, b, c, d, e; 
	
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
	
	if(a>b && a>c && a>d && a>e)
	printf("�ִ밪�� %d�Դϴ�.\n", a);
	
	else if(b>a && b>c && b>d && b>e)
	printf("�ִ밪�� %d�Դϴ�.\n", b);
	
	else if(c>a && c>b && c>d && c>e)
	printf("�ִ밪�� %d�Դϴ�.\n", c);
	
	else if(d>a && d>b && d>c && d>e)
	printf("�ִ밪�� %d�Դϴ�.\n", d);
	
	else if(e>a && e>b && e>c && e>d)
	printf("�ִ밪�� %d�Դϴ�.\n", e);


	if(a<b && a<c && a<d && a<e)
	printf("�������� %d�Դϴ�.\n", a);
	
	else if(b<a && b<c && b<d && b<e)
	printf("�������� %d�Դϴ�.\n", b);
	
	else if(c<a && c<b && c<d && c<e)
	printf("�������� %d�Դϴ�.\n", c);
	
	else if(d<a && d<b && d<c && d<e)
	printf("�������� %d�Դϴ�.\n", d);
	
	else if(e<a && e<b && e<c && e<d)
	printf("�������� %d�Դϴ�.\n", e);


	return 0;
}

#include<stdio.h>
int main()
{
	int year;
	
	printf("���ϴ� ������ �Է��ϼ���: ");
	scanf("%d", &year);
	
	if(year%4==0 && year%100!=400)
	printf("�����Դϴ�.");
	
	else if(year%400==0)
	printf("�����Դϴ�.");
	
	else
	printf("������ �ƴմϴ�.");
	
	return 0;
}

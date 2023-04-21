#include <stdio.h>
int main ()
{
	int day, year, month, endOfMonth=0, startOfMonth=0;
	long long dates=0;
	
	printf("�⵵ �Է� : ");
	while(true)
	{
			scanf("%d", &year);
			if( 1900 <= year ) break;
			else printf("�ٽ� �����Ͻÿ�\n");	
	}

	printf("�� �Է� : ");
	while(true)
	{
			scanf("%d", &month);
			if( 1 <= month && month <= 12 ) break;
			else printf("�ٽ� �����Ͻÿ�\n\n");
	}
	


// 1900�� 1��1�Ϻ��� �۳⸻������ �ϼ� (������ 366���� ����) 
	for( int i = 1901; i <= year ; i++ )
	{	
		if((i%4==0 && i%100!=400) || (i%400==0)) dates += 366;
		else dates += 365;
	}
	
		printf("�۳⸻������ �ϼ� : %d\n", dates); 
		
// ���� �ϼ��� ����	
switch(month)
{
	case 12 : dates += 30;
	case 11 : dates += 31; 
	case 10 : dates += 30;
	case 9 : dates += 31; 
	case 8 : dates += 31; 
	case 7 : dates += 30; 
	case 6 : dates += 31; 
	case 5 : dates += 30; 
	case 4 : dates += 31;
	case 3 : dates += 28;
	case 2 : dates += 31; 
	case 1 : dates += 0; break;
}

	if((year%4==0 && year%100!=400) || (year%400==0)) dates += 1;
	
	printf("���� �ϼ� ���� : %d\n", dates); 
	
// ������ ���������� ������ ����, �����ϴ³� ���� 
	if(dates % 7 == 1) startOfMonth = 2; //�� -> �̹��� ȭ���� ���� 
	else if(dates % 7 == 2) startOfMonth = 3; //ȭ -> �̹��� ������ ���� 
	else if(dates % 7 == 3) startOfMonth = 4; //�� -> �̹��� ����� ���� 
	else if(dates % 7 == 4) startOfMonth = 5; //�� -> �̹��� �ݿ��� ���� 
	else if(dates % 7 == 5) startOfMonth = 6; //�� -> �̹��� ����� ���� 
	else if(dates % 7 == 6) startOfMonth = 0; //�� -> �̹��� �Ͽ��� ���� 
	else if(dates % 7 == 0) startOfMonth = 1; //�� -> �̹��� ������ ���� 
	
	printf("���� ���� : %d\n", startOfMonth); 

//�������� 
	if (month == 4 || month == 6 || month == 9 || month == 11 ) endOfMonth=30; 
	else if ( month == 2)
	{
		if((year%4==0 && year%100!=400) || (year%400==0)) endOfMonth=29;
		else endOfMonth=28;
	}
	else endOfMonth=31;

	
//�޷� ����� 

	printf("====== %d�� %d��=====\n", year, month);
	printf(" �� �� ȭ �� �� �� ��\n");


	for( int j = 0 ; j < startOfMonth ; j++ )
	{ 
		printf("   ");
	}
	
	for( day = 1 ; day <= endOfMonth ; day++ )
	{
		printf("%3d", day );
		
		if ((startOfMonth + day) % 7 == 0) 
		{
        printf("\n");
		}

	}
	

	

	
	return 0;
}

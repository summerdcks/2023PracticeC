#include <stdio.h>
int main ()
{
	int dates, year, month;
	
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
			if( 1 <= month || month <= 12 ) break;
			else printf("�ٽ� �����Ͻÿ�\n\n");
	}
	
	printf("====================== %d�� %d�� =====================\n\n", year, month);
	printf("��	��	ȭ	��	��	��	��");


// 1900�� 1��1�Ϻ��� �۳⸻������ �ϼ� (������ 366���� ����) 
	for( int i = 1900 ; i < year ; i++ )
	{	
		if((year%4==0 && year%100!=400) || (year%400==0)) dates += 366;
		else dates += 365;
	}
	
// ���� �ϼ��� ����	
	switch(month)
	{
	case 1 :
		
		break; 
	case 2 :
		dates = dates+31;
		break; 
	case 3 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28;
		else dates = dates+31+29;
		break; 
	case 4 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31;
		else dates = dates+31+29+31;
		break; 
	case 5 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30;
		else dates = dates+31+29+31+30;
		break; 
	case 6 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30+31;
		else dates = dates+31+29+31+30+31;
		break; 
	case 7 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30+31+31;
		else dates = dates+31+29+31+30+31+31;
		break; 
	case 8 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30+31+31+30;
		else dates = dates+31+29+31+30+31+31+30;
		break; 
	case 9 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30+31+31+30+31;
		else dates = dates+31+29+31+30+31+31+30+31;
		break; 
	case 10 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30+31+31+30+31+30;
		else dates = dates+31+29+31+30+31+31+30+31+30;
		break; 
	case 11 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30+31+31+30+31+30+31;
		else dates = dates+31+29+31+30+31+31+30+31+30+31;
		break; 
	case 12 :
		if((year%4==0 && year%100!=400) || (year%400==0)) dates = dates+31+28+31+30+31+31+30+31+30+31+30;
		else dates = dates+31+29+31+30+31+31+30+31+30+31+30;
		break;	
	}
	
// ������ ���������� ������ ����
	if(dates % 7 == 1) //�� 
	if(dates % 7 == 2) //ȭ 
	if(dates % 7 == 3) //�� 
	if(dates % 7 == 4) //�� 
	if(dates % 7 == 5) //��
	if(dates % 7 == 6) //�� 
	if(dates % 7 == 0) //��
	
	int day;
for( int j = 1 ; j < 31; j++ )
    {
        if ((day % 7) == 1) printf("%2d  ", day);
        else if ((day % 7) == 0) {printf("%2d\n", day);
        else printf("%2d   ", day);
    }
		
		
		
		
		
	

	
	

	
	
	
	
	
	
	
	
	
	return 0;
}

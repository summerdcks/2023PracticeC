#include <stdio.h>
int main ()
{
	int dates, year, month;
	
	printf("년도 입력 : ");
	while(true)
	{
			scanf("%d", &year);
			if( 1900 <= year ) break;
			else printf("다시 선택하시오\n");	
	}

	printf("월 입력 : ");
	while(true)
	{
			scanf("%d", &month);
			if( 1 <= month || month <= 12 ) break;
			else printf("다시 선택하시오\n\n");
	}
	
	printf("====================== %d년 %d월 =====================\n\n", year, month);
	printf("일	월	화	수	목	금	토");


// 1900년 1월1일부터 작년말까지의 일수 (윤년은 366일을 더함) 
	for( int i = 1900 ; i < year ; i++ )
	{	
		if((year%4==0 && year%100!=400) || (year%400==0)) dates += 366;
		else dates += 365;
	}
	
// 올해 일수를 더함	
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
	
// 지난달 마지막날의 요일을 구함
	if(dates % 7 == 1) //월 
	if(dates % 7 == 2) //화 
	if(dates % 7 == 3) //수 
	if(dates % 7 == 4) //목 
	if(dates % 7 == 5) //금
	if(dates % 7 == 6) //토 
	if(dates % 7 == 0) //일
	
	int day;
for( int j = 1 ; j < 31; j++ )
    {
        if ((day % 7) == 1) printf("%2d  ", day);
        else if ((day % 7) == 0) {printf("%2d\n", day);
        else printf("%2d   ", day);
    }
		
		
		
		
		
	

	
	

	
	
	
	
	
	
	
	
	
	return 0;
}

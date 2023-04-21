#include <stdio.h>
int main ()
{
	int day, year, month, endOfMonth=0, startOfMonth=0;
	long long dates=0;
	
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
			if( 1 <= month && month <= 12 ) break;
			else printf("다시 선택하시오\n\n");
	}
	


// 1900년 1월1일부터 작년말까지의 일수 (윤년은 366일을 더함) 
	for( int i = 1901; i <= year ; i++ )
	{	
		if((i%4==0 && i%100!=400) || (i%400==0)) dates += 366;
		else dates += 365;
	}
	
		printf("작년말까지의 일수 : %d\n", dates); 
		
// 올해 일수를 더함	
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
	
	printf("올해 일수 포함 : %d\n", dates); 
	
// 지난달 마지막날의 요일을 구함, 시작하는날 설정 
	if(dates % 7 == 1) startOfMonth = 2; //월 -> 이번달 화요일 시작 
	else if(dates % 7 == 2) startOfMonth = 3; //화 -> 이번달 수요일 시작 
	else if(dates % 7 == 3) startOfMonth = 4; //수 -> 이번달 목요일 시작 
	else if(dates % 7 == 4) startOfMonth = 5; //목 -> 이번달 금요일 시작 
	else if(dates % 7 == 5) startOfMonth = 6; //금 -> 이번달 토요일 시작 
	else if(dates % 7 == 6) startOfMonth = 0; //토 -> 이번달 일요일 시작 
	else if(dates % 7 == 0) startOfMonth = 1; //일 -> 이번달 월요일 시작 
	
	printf("요일 시작 : %d\n", startOfMonth); 

//마지막일 
	if (month == 4 || month == 6 || month == 9 || month == 11 ) endOfMonth=30; 
	else if ( month == 2)
	{
		if((year%4==0 && year%100!=400) || (year%400==0)) endOfMonth=29;
		else endOfMonth=28;
	}
	else endOfMonth=31;

	
//달력 만들기 

	printf("====== %d년 %d월=====\n", year, month);
	printf(" 일 월 화 수 목 금 토\n");


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

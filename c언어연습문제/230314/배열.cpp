#include <stdio.h>

int main()
{
	const int FIRST_YEAR = 1900;
	const FLAG = 0;
	int a[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 }
	int lastDayOfMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//정수형 배열 
	int inputYear = 2024, inputMonth = 2;
	int leapYearCount;
	int days, startWeek;
	
	// 지난 년도 계산
	days = 0;
	days = (inputYear - FIRST_YEAR) * 365;
	
	if(FLAG)
	{
		scanf("%d", &input);
	}
	else
	{
		input = a[0];
	}
	
	
	

	

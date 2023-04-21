#include <stdio.h>
int main ()
{
	int year, month;
	
	printf("년도 입력 : ");
	while(true)
	{
			scanf("%d", &year);
			if( 999 < year && year < 10000 ) break;
			else if(year == 0) printf("종료합니다.");
			else printf("다시 입력하시오\n");
			
	}

	printf("월 입력 : ");
	while(true)
	{
			scanf("%d", &month);
			if( 1 <= month && month <= 12 ) break;
			else printf("다시 입력하시오\n");
	}

	
	
	printf("\n====================== %d년 %d월 =====================\n\n", year, month);
	printf("일	월	화	수	목	금	토\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

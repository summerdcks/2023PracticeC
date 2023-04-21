#include <stdio.h>
int main()
{
	float money, change;
	float dollar, yen, euro;
	float exchangerate;
	int country;
	
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%f", &money); 
	
	printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR):");
	scanf("%d", &country);
	
	switch(country)
	{
		
	case 1 :
		exchangerate = 1320.90;
			
		printf("기준 환율:%.2f\n", exchangerate);
		
		dollar = money/exchangerate;
		change = money-(int)dollar*exchangerate;
		change = (int)(change/10)*10;
		
		printf("환전 결과\n달러:%d\n거스름돈\n:%d원", (int)dollar, (int)change);
	break;
	
	
	case 2 :
		exchangerate = 959.44;
			
		printf("기준 환율:%.2f\n", exchangerate);
		
		yen = money/exchangerate;
		change = money-(int)yen*exchangerate;
		change = (int)(change/10)*10;
		
		printf("환전 결과\n엔:%d\n거스름돈\n:%d원", (int)yen, (int)change);
	break;
	
	case 3 :
		exchangerate = 1391.54;
			
		printf("기준 환율:%.2f\n", exchangerate);
		
		euro = money/exchangerate;
		change = money-(int)euro*exchangerate;
		change = (int)(change/10)*10;
		
		printf("환전 결과\n유로:%d\n거스름돈:%d원", (int)euro, (int)change);
	break;	
	}
		
	return 0;
 } 

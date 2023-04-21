#include<stdio.h>

int main()
{
//선언부 
	float won, change;
	float dollar;
	//환율배열
	float exchangerate[15]= {0, 1320.90, 9.60, 1391.54, 175, 1566, 904, 810, 849, 1246, 15};  
	char* stringEx[15] = {"", "달러", "엔", "유로", "위안","파운드","캐나다달러","호주달러","싱가포르달러","프랑","루블"};
	int country;
	int thousand, fivehundred, hundred, ten; 
	
//입력부 
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%f", &won); 
	printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP, 6:CAD, 7:AUD, 8:SGD, 9:CHF, 10:RUB):");
	scanf("%d", &country);
	
//처리부 
	//환율계산 
	dollar = (float)won/exchangerate[country];
	change = won-(int)dollar*exchangerate[country];
	change = (int)(change/10)*10;
	//거스름돈 
	thousand = (int)change/1000;
	fivehundred = ((int)change%1000)/500;
	hundred = ((int)change%500)/100;
	ten = ((int)change%100)/10;

//출력부 
	printf("기준 환율:%.2f\n", exchangerate[country]);
	printf("환전 결과\n%s:%d\n거스름돈\n:%d원\n", stringEx[country], (int)dollar, (int)change);
	printf("\n천원권 : %d개\n오백원 : %d개\n백원 : %d개\n십원 : %d개", thousand, fivehundred, hundred, ten);
		
	return 0;
	
}

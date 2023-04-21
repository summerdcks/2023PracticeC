#include<stdio.h>

//함수선언 
float getExchangeRate(int country);

void printAll(float exchangeRate, int result, int change,
										int thousand, int fivehundred, int hundred, int ten, int country);

int main()
{
//선언부 
	int country;
	float won, change;
	float result;
	int thousand, fivehundred, hundred, ten;
	float exchangeRate;

	
//입력부 
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%f", &won); 
	printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP, 6:CAD, 7:AUD, 8:SGD, 9:CHF, 10:RUB):");
	scanf("%d", &country);
	
//처리부 
	exchangeRate = getExchangeRate(country);
	//환율계산 
	result = (float)won/exchangeRate;
	change = won-(int)result*exchangeRate;
	change = (int)(change/10)*10;
	//거스름돈 
	thousand = (int)change/1000;
	fivehundred = ((int)change%1000)/500;
	hundred = ((int)change%500)/100;
	ten = ((int)change%100)/10;


	
//출력부 
	printAll(exchangeRate, result, change, thousand, fivehundred, hundred, ten, country);

	return 0;
	
}

//함수 
float getExchangeRate(int country)
{
	//환율
	const float USD=1312.30, JPY=9.89, EUR=1391.05, CNY=190.12, GBP=1584.44, CAD=954.46, AUD=869.78, CHF=1410.08, SGD=971.15, RUB=17.26;

	float exchangeRate = 0.0;
	switch(country) 
    {
    case 1:
        exchangeRate = USD;
        break;
    case 2:
        exchangeRate = JPY;
        break;
    case 3:
        exchangeRate = EUR;
        break;
    case 4:
        exchangeRate = CNY;
        break;
    case 5:
        exchangeRate = GBP;
        break;
    case 6:
  		exchangeRate = CAD;
  		break;
    case 7:
        exchangeRate = AUD;
        break;
    case 8:
        exchangeRate = SGD;
        break;
    case 9:
        exchangeRate = CHF;
        break;
    case 10:
        exchangeRate = RUB;
    }
	return exchangeRate;
}



void printAll(float exchangeRate, int result, int change,
										int thousand, int fivehundred, int hundred, int ten, int country)
{
	printf("기준 환율: %.2f\n", exchangeRate);
	printf("환전 결과: %d ", (int)result);
	 switch(country) 
    {
    case 1:
        printf("달러\n");
        break;
    case 2:
        printf("엔\n");
        break;
    case 3:
        printf("유로\n");
        break;
    case 4:
        printf("위안\n");
        break;
    case 5:
        printf("파운드\n");
        break;
	case 6:
    	printf("캐나다달러\n");
		break;
    case 7:
        printf("호주달러\n");
        break;
    case 8:
        printf("싱가포르달러\n");
        break;
    case 9:
        printf("프랑\n");
        break;
    case 10:
        printf("루블\n");
        break;
    }


	printf("거스름돈 :%d원\n천원권 : %d개\n오백원 : %d개\n백원 : %d개\n십원 : %d개", (int)change, thousand, fivehundred, hundred, ten);
}

#include<stdio.h>

//�Լ����� 
float getExchangeRate(int country);

void printAll(float exchangeRate, int result, int change,
										int thousand, int fivehundred, int hundred, int ten, int country);

int main()
{
//����� 
	int country;
	float won, change;
	float result;
	int thousand, fivehundred, hundred, ten;
	float exchangeRate;

	
//�Էº� 
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%f", &won); 
	printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP, 6:CAD, 7:AUD, 8:SGD, 9:CHF, 10:RUB):");
	scanf("%d", &country);
	
//ó���� 
	exchangeRate = getExchangeRate(country);
	//ȯ����� 
	result = (float)won/exchangeRate;
	change = won-(int)result*exchangeRate;
	change = (int)(change/10)*10;
	//�Ž����� 
	thousand = (int)change/1000;
	fivehundred = ((int)change%1000)/500;
	hundred = ((int)change%500)/100;
	ten = ((int)change%100)/10;


	
//��º� 
	printAll(exchangeRate, result, change, thousand, fivehundred, hundred, ten, country);

	return 0;
	
}

//�Լ� 
float getExchangeRate(int country)
{
	//ȯ��
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
	printf("���� ȯ��: %.2f\n", exchangeRate);
	printf("ȯ�� ���: %d ", (int)result);
	 switch(country) 
    {
    case 1:
        printf("�޷�\n");
        break;
    case 2:
        printf("��\n");
        break;
    case 3:
        printf("����\n");
        break;
    case 4:
        printf("����\n");
        break;
    case 5:
        printf("�Ŀ��\n");
        break;
	case 6:
    	printf("ĳ���ٴ޷�\n");
		break;
    case 7:
        printf("ȣ�ִ޷�\n");
        break;
    case 8:
        printf("�̰������޷�\n");
        break;
    case 9:
        printf("����\n");
        break;
    case 10:
        printf("���\n");
        break;
    }


	printf("�Ž����� :%d��\nõ���� : %d��\n����� : %d��\n��� : %d��\n�ʿ� : %d��", (int)change, thousand, fivehundred, hundred, ten);
}

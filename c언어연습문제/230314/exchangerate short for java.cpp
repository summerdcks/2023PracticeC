#include<stdio.h>
int main()
{
	float won, change;
	float dollar, yen, euro;
//	float exchangerate;
	float exchangerate[10] = {0, 1320.90, 9.60, 1391.54};
	char* stringEx[10] = {"", "�޷�", "��", "����"};
	int country;
	int thousand, fivehundred, hundred, ten; 
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%f", &won); 
	
	printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR):");
	scanf("%d", &country);
	
//	switch(country)
//	{
//		
//	case 1 :
//
//
//		exchangerate = 1320.90;
//			
		printf("���� ȯ��:%.2f\n", exchangerate[country]);
		
		dollar = (float)won/exchangerate[country];
		change = won-(int)dollar*exchangerate[country];
		change = (int)(change/10)*10;
		
		printf("ȯ�� ���\n%s:%d\n�Ž�����\n:%d��\n", stringEx[country], (int)dollar, (int)change);
//	break;
//	
//	
//	
//	case 2 :
//		exchangerate = 959.44;
//			
//		printf("���� ȯ��:%.2f\n", exchangerate);
//		
//		yen = (float)won/exchangerate;
//		change = won-(int)yen*exchangerate;
//		change = (int)(change/10)*10;
//		
//		printf("ȯ�� ���\n��:%d\n�Ž�����\n:%d��", (int)(yen*100), (int)change);      //���� �����ؼ� *100 
//	break;
//	
//	
//	
//	case 3 :
//		exchangerate = 1391.54;
//			
//		printf("���� ȯ��:%.2f\n", exchangerate);
//		
//		euro = (float)won/exchangerate;
//		change = won-(int)euro*exchangerate;
//		change = (int)(change/10)*10;
//		
//		printf("ȯ�� ���\n����:%d\n�Ž�����:%d��", (int)euro, (int)change);
//	break;	
//	}
		
		thousand = (int)change/1000;
		fivehundred = ((int)change%1000)/500;
		hundred = ((int)change%500)/100;
		ten = ((int)change%100)/10;
		
		printf("\nõ���� : %d��\n����� : %d��\n��� : %d��\n�ʿ� : %d��", thousand, fivehundred, hundred, ten);
	
	
	return 0;
	
}

#include <stdio.h>
int main()
{
	float money, change;
	float dollar, yen, euro;
	float exchangerate;
	int country;
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%f", &money); 
	
	printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR):");
	scanf("%d", &country);
	
	switch(country)
	{
		
	case 1 :
		exchangerate = 1320.90;
			
		printf("���� ȯ��:%.2f\n", exchangerate);
		
		dollar = money/exchangerate;
		change = money-(int)dollar*exchangerate;
		change = (int)(change/10)*10;
		
		printf("ȯ�� ���\n�޷�:%d\n�Ž�����\n:%d��", (int)dollar, (int)change);
	break;
	
	
	case 2 :
		exchangerate = 959.44;
			
		printf("���� ȯ��:%.2f\n", exchangerate);
		
		yen = money/exchangerate;
		change = money-(int)yen*exchangerate;
		change = (int)(change/10)*10;
		
		printf("ȯ�� ���\n��:%d\n�Ž�����\n:%d��", (int)yen, (int)change);
	break;
	
	case 3 :
		exchangerate = 1391.54;
			
		printf("���� ȯ��:%.2f\n", exchangerate);
		
		euro = money/exchangerate;
		change = money-(int)euro*exchangerate;
		change = (int)(change/10)*10;
		
		printf("ȯ�� ���\n����:%d\n�Ž�����:%d��", (int)euro, (int)change);
	break;	
	}
		
	return 0;
 } 

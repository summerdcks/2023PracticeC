#include<stdio.h>

int main()
{
//����� 
	float won, change;
	float dollar;
	//ȯ���迭
	float exchangerate[15]= {0, 1320.90, 9.60, 1391.54, 175, 1566, 904, 810, 849, 1246, 15};  
	char* stringEx[15] = {"", "�޷�", "��", "����", "����","�Ŀ��","ĳ���ٴ޷�","ȣ�ִ޷�","�̰������޷�","����","���"};
	int country;
	int thousand, fivehundred, hundred, ten; 
	
//�Էº� 
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%f", &won); 
	printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP, 6:CAD, 7:AUD, 8:SGD, 9:CHF, 10:RUB):");
	scanf("%d", &country);
	
//ó���� 
	//ȯ����� 
	dollar = (float)won/exchangerate[country];
	change = won-(int)dollar*exchangerate[country];
	change = (int)(change/10)*10;
	//�Ž����� 
	thousand = (int)change/1000;
	fivehundred = ((int)change%1000)/500;
	hundred = ((int)change%500)/100;
	ten = ((int)change%100)/10;

//��º� 
	printf("���� ȯ��:%.2f\n", exchangerate[country]);
	printf("ȯ�� ���\n%s:%d\n�Ž�����\n:%d��\n", stringEx[country], (int)dollar, (int)change);
	printf("\nõ���� : %d��\n����� : %d��\n��� : %d��\n�ʿ� : %d��", thousand, fivehundred, hundred, ten);
		
	return 0;
	
}

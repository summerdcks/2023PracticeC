//�Ž����� 3250 : õ���� 3�� ����� 0�� ��� 2�� �ʿ� 5��

#include <stdio.h>
int main()
{
	float money, change;
	float dollar, yen, euro;
	float exchangerate;
	int country;
	int thousand, fivehundred, hundred, ten; 

	scanf("%f", &change);

		thousand = (int)change/1000;
		fivehundred = (change-1000*thousand)/500;
		hundred = (change-1000*thousand-500*fivehundred)/100;
		ten = (change-1000*thousand-500*fivehundred-100*hundred)/10;
		
		printf("õ���� : %d��\n����� : %d��\n��� : %d��\n�ʿ� : %d��", thousand, fivehundred, hundred, ten);



	return 0;
 } 

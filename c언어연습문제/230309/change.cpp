//거스름돈 3250 : 천원권 3장 오백원 0개 백원 2개 십원 5개

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
		
		printf("천원권 : %d장\n오백원 : %d개\n백원 : %d개\n십원 : %d개", thousand, fivehundred, hundred, ten);



	return 0;
 } 

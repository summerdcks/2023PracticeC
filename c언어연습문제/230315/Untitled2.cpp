#include <stdio.h>
#include <time.h>
#include <string.h> 

int main()
{
	int age, dayNight, number, price, discount;
	int birthYear, birthMonth, birthDay, flag;
	int answer, end;
	long long int socialNumber;
	float discountRate;
	
	int DAY_ADULT, DAY_TEEN, DAY_CHILD, DAY_OLD, DAY_BABY, NIGHT_ADULT, NIGHT_TEEN, NIGHT_CHILD, NIGHT_OLD, NIGHT_BABY;


	//	char* ticket[�ְ���,�߰���][BABY, CHILD, TEEN, ADULT, OLD] = {}
	char* ticket[2][5] = {
							{0},
							{0}
					 	 };
	


	int i=0;
	char* typeOfTicket[20] = { 0 };
 	int countOfTicket[20] = { 0 };
 	char* appliedDiscount[20] = { 0 };
 	char* ageOfEntrant[20] = { 0 };
	int priceOfTicket[20] = { 0 };


	
		printf("������ �Է��Ͻÿ�:\n1. �ְ���\n2. �߰���\n");
		while(true)
		 {
		 	scanf("%d", &dayNight);
		 	if(dayNight == 1 || dayNight == 2) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }
		

		if (dayNight == 1) 
		{
			for(int a = 0 ; a < 2 ; a++)
			ticket[1][a]="DAY";
		}
		else 
		{
			for(int a = 0 ; a < 2 ; a++)
			ticket[2][a]="NIGHT";
		}
		
		printf("\n�ֹι�ȣ�� �Է��Ͻÿ�:\n");
		while(true)
		 {
		 	scanf("%lld", &socialNumber);
	 		
	 			//�ֹι�ȣ �����ϱ� 
				birthYear = socialNumber / 100000000000;	//���� 
				birthMonth = socialNumber / 1000000000 % 100; //�� 
				birthDay = socialNumber / 10000000 % 100;		//�� 
				flag = socialNumber / 1000000 % 10;			//�ֹι�ȣ���ڸ�ù��° 
	
				
	 		 	if(
				  (999999999999 < socialNumber && socialNumber < 10000000000000)
				  &&
				  (1 <= birthMonth && birthMonth <= 12)
				  &&
				  (1 <= birthDay && birthDay <= 31)
				  &&
			 	  (flag == 1 || flag == 2 || flag == 3 || flag == 4)
			 	 )
				break;			
			 	
	 			else printf("�ٽ� �����Ͻÿ�\n");
		 }
		 
		//���糯¥ �ҷ�����
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		
		int year = t->tm_year + 1900; // 1900�� �������� ������
		int month = t->tm_mon + 1; // ���� 0���� �����ϹǷ� 1�� ������
		int day = t->tm_mday;
	

		//���̰���ϱ� 
		age = (year - birthYear) % 100 + 1;
	

	

			if(age<=2) 
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_BABY"));
			}
		
			else if(age<=12)
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_CHILD"));
			}
			
			
			else if(age<=18)
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_TEEN"));
			}
		
			
			else if(age<=64)
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_ADULT"));
			}
		
			
			else
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_OLD"));
			}
		
	

	
		DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;


printf("%s", (int)ticket[0][0]);




return 0;
}

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


	//	char* ticket[주간권,야간권][BABY, CHILD, TEEN, ADULT, OLD] = {}
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


	
		printf("권종을 입력하시오:\n1. 주간권\n2. 야간권\n");
		while(true)
		 {
		 	scanf("%d", &dayNight);
		 	if(dayNight == 1 || dayNight == 2) break;
		 	else printf("다시 선택하시오\n");
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
		
		printf("\n주민번호를 입력하시오:\n");
		while(true)
		 {
		 	scanf("%lld", &socialNumber);
	 		
	 			//주민번호 분해하기 
				birthYear = socialNumber / 100000000000;	//생년 
				birthMonth = socialNumber / 1000000000 % 100; //월 
				birthDay = socialNumber / 10000000 % 100;		//일 
				flag = socialNumber / 1000000 % 10;			//주민번호뒷자리첫번째 
	
				
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
			 	
	 			else printf("다시 선택하시오\n");
		 }
		 
		//현재날짜 불러오기
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		
		int year = t->tm_year + 1900; // 1900년 기준으로 더해줌
		int month = t->tm_mon + 1; // 월은 0부터 시작하므로 1을 더해줌
		int day = t->tm_mday;
	

		//나이계산하기 
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

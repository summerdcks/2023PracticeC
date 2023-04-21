
#include <stdio.h>
#include <time.h> 

int main()
{
	int age, dayNight, number, price, discount;
	int birthYear, birthMonth, birthDay, flag;
	int answer, end;
	long long int socialNumber;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;

//나중에 해보기 
//	int typeOfTicket[주간권,야간권][BABY, CHILD, TEEN, ADULT, OLD] = {}
//	char* typeOfTicket[2][5] = {DAY_BABY, DAY_CHILD, DAY_TEEN, DAY_ADULT, DAY_OLD},
//								{NIGHT_BABY, NIGHT_CHILD, NIGHT_TEEN, NIGHT_ADULT, NIGHT_OLD};


do{
	
	int i=0;
	char* typeOfTicket[20] = { 0 };
 	char* appliedDiscount[20] = { 0 };
 	char* ageOfEntrant[20] = { 0 };
	int list[10][2] = { 0 };		//count price
	
	do{
		
	
		printf("권종을 입력하시오:\n1. 주간권\n2. 야간권\n");
		while(true)
		 {
		 	scanf("%d", &dayNight);
		 	if(dayNight == 1 || dayNight == 2) break;
		 	else printf("다시 선택하시오\n");
		 }
		

		if (dayNight == 1) typeOfTicket[i]="주간권";
		else typeOfTicket[i]="야간권"; 
		

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
		 
		
		printf("\n몇개를 주문하시겠습니까?(최대10개):\n");
		while(true)
		 {
		 	scanf("%d", &number);
		 	if(0 < number && number < 11) break;
		 	else printf("다시 선택하시오\n");
		 }
	
	
		list[i][0] = number; 
	
	
	
		printf("\n우대사항을 선택하시오:\n1.없음(나이우대는 자동처리)\n2.장애인\n3.국가유공자\n4.다자녀\n5.임산부\n");
		while(true)
		 {
			scanf("%d", &discount);
		 	if(0 < discount && discount < 6) break;
		 	else printf("다시 선택하시오\n");
		 }


		if(discount == 1) appliedDiscount[i]="*우대적용없음";
		if(discount == 2) appliedDiscount[i]="*장애인우대적용";
		if(discount == 3) appliedDiscount[i]="*국가유공자우대적용";
		if(discount == 4) appliedDiscount[i]="*다자녀우대적용";
		if(discount == 5) appliedDiscount[i]="*임산부우대적용";



		//현재날짜 불러오기
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		
		int year = t->tm_year + 1900; // 1900년 기준으로 더해줌
		int month = t->tm_mon + 1; // 월은 0부터 시작하므로 1을 더해줌
		int day = t->tm_mday;
	

		//나이계산하기 
		age = (year - birthYear) % 100 + 1;
	

	
		if(dayNight==1)				//주간권 
		{
			if(age<=2) 
			price=DAY_BABY;
		
			else if(age<=12)
			price=DAY_CHILD;
			
			else if(age<=18)
			price=DAY_TEEN;
			
			else if(age<=64)
			price=DAY_ADULT;
			
			else
			price=DAY_OLD;
		
		}
		
		else if(dayNight==2)		//야간권 
		{
			if(age<=2) 
			price=NIGHT_BABY;
		
			else if(age<=12)
			price=NIGHT_CHILD;
			
			else if(age<=18)
			price=NIGHT_TEEN;
		
			else if(age<=64)
			price=NIGHT_ADULT;
		
			else
			price=NIGHT_OLD;
		
		}	
		
		if (price==DAY_BABY || price==NIGHT_BABY) ageOfEntrant[i]="영유아"; 
		else if (price==DAY_CHILD || price==NIGHT_CHILD) ageOfEntrant[i]="어린이"; 
		else if (price==DAY_TEEN || price==NIGHT_TEEN) ageOfEntrant[i]="청소년"; 
		else if (price==DAY_ADULT || price==NIGHT_ADULT) ageOfEntrant[i]="어른"; 
		else if (price==DAY_OLD || price==NIGHT_OLD) ageOfEntrant[i]="노인"; 
		
		
		
		
		
		switch(discount)		//할인율
		{	
			case 1 :
					discountRate=1;
			break;
		
			case 2 :
				discountRate=0.6;
			break;
		
			case 3 :
				discountRate=0.5;
			break;
		
			case 4 :
				discountRate=0.8;
			break;
		
			case 5 :
				discountRate=0.85;
			break;
		
		}




		printf("\n가격은 %d 원입니다.\n감사합니다\n\n", (int)((float)price*(float)number*discountRate));
	
		list[i][1] = (int)((float)price*(float)number*discountRate);			//금액을 totalPrice 배열에 저장 
	
		printf("계속하시겠습니까?:\n1.네\n2.종료\n");
		scanf("%d", &answer);
 
		i++;



	}while(answer == 1);


	printf("===================에버랜드==================\n\n");
	
	int sum =0;
	for (int j = 0 ; j < i ; j++)
		{	
		printf("%5s %5s x %3d %10d원 %10s\n", typeOfTicket[j], ageOfEntrant[j], list[j][0], list[j][1], appliedDiscount[j]); 
    	
		sum += list[j][1];		//배열의 요소 합산 =총액 	
		}


	printf("\n입장료 총액은 %d원입니다.\n\n=============================================", sum);
	
	printf("\n\n계속 진행(1:새로운 주문, 2:프로그램 종료):");
	scanf("%d", &end); 
	
}while(end==1);

	return 0;
}

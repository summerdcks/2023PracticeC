#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>   // 문자열 처리 함수를 사용하기 위한 헤더 파일

int main()
{
	int ticket;
	long long  idNum;
	int num;
	int special;
	int ticketList[10], ageList[10], numList[10], specialList[10], totalOrderCount = 0;
	long long birthYear = 0, birthMonth = 0, birthDay = 0;
	//long long todayYear, todayMonth, todayDay;
	long long age;
	int flag;
	
	while(true)  // 전체 주문 반복 
	{
			// 권종 선택 
		printf("권종을 선택하세요.\n");  
		printf("1. 주간권\n");
		printf("2. 야간권\n");		
		while (true){
			scanf("%d", &ticket);
			
			if (ticket == 1 || ticket == 2){
				break;
			}
			else {
			printf("다시 입력하세요.\n");
			}
		}
		ticketList[totalOrderCount] = ticket;	
		// 주민번호 입력  
		printf("주민번호를 입력하세요.(-없이 입력)\n");  
		while (true){		
			char id[14]; // 주민번호를 입력받을 문자열 배열
			char birthMonthStr[3]; // 월을 저장할 문자열 배열
			char birthDayStr[3]; // 일을 저장할 문자열 배열
			char birthYearStr[3];
			char flagStr[3];
			
			scanf("%s", id);
			
			birthYearStr[0] = id[0]; //주민번호의 년 부분을 추출하여 year 배열에 넣기  
		    birthYearStr[1] = id[1];
		    birthYearStr[2] = '\0';
		    
		    birthMonthStr[0] = id[2]; //주민번호의 월 부분을 추출하여 month 배열에 넣기  
		    birthMonthStr[1] = id[3];
		    birthMonthStr[2] = '\0';
		    
		    birthDayStr[0] = id[4]; //주민번호의 월 부분을 추출하여 day 배열에 넣기  
		    birthDayStr[1] = id[5];
		    birthDayStr[2] = '\0';
		    
		    flagStr[0] = id[6]; //성별 자리 추출  
		    flagStr[1] = '\0';
		    
			
			if(	
				(atoi(birthYearStr) >= 00 && atoi(birthYearStr) <= 99)
				&&
			 	(strlen(id) == 13)
				 &&
				(atoi(birthMonthStr) >= 01 && atoi(birthMonthStr) <= 12)
				&&
				(atoi(birthDayStr) >= 01 && atoi(birthDayStr) <= 31)
				&&
			  	(atoi(flagStr) == 1 || atoi(flagStr) == 2 || atoi(flagStr) == 3 || atoi(flagStr) == 4)
			)
			{
				//printf("입력한 주민번호의 생년월일은 %s년 %s월 %s일입니다.\n", birthYearStr, birthMonthStr, birthDayStr);
				
		        birthYear = atoi(birthYearStr);
		    	birthMonth = atoi(birthMonthStr);
		    	birthDay = atoi(birthDayStr);
		    	
			    //나이 계산하기
				time_t t = time(NULL);  
			    struct tm *now = localtime(&t);  
			    int todayYear = now->tm_year + 1900;  
			    int todayMonth = now->tm_mon + 1;  
			    int todayDay = now->tm_mday;  
			 
				 //long long age;
				 age = (todayYear - birthYear) % 100; //만 나이  
				 ageList[totalOrderCount] = age;
				 //printf("당신의 나이는 %lld세입니다.\n", age);
				 break; // if 맞으면 다음 코드로 이동  
			} //if가 맞으면 여기까지 수행  		
			else{
				printf("다시 입력하세요.\n");
			}
		}
		//할인 가격 계산  
		int dayA = 56000, dayT = 47000, dayS = 44000, dayG = 44000;
		int nightA = 46000, nightT = 40000, nightS = 37000, nightG = 37000;
		int price;
		if ( ticket == 1)
		{
			if (age >= 19 && age <= 64 )
			{
				price = dayA;
			}
			 else if (age <= 18 )
			{
				price = dayT;
			}
			else if (age <= 12 )
			{
				price = dayS;
			}
			else if (age >= 65 )
			{
				price = dayG;
			}
			else if (age <= 2 )
			{
				price = 0;
			}
		}	
		if ( ticket == 2)
		{
			if (age >= 19 && age <= 64 )
			{
				price = nightA;
			}
			 else if (age >= 13 && age <= 18 )
			{
				price = nightT;
			}
			else if (age >= 3 && age <= 12 )
			{
				price = nightS;
			}
			else if (age >= 65 )
			{
				price = nightG;
			}
			else if (age <= 2 )
			{
				price = 0;
			}
		}
		printf("몇 개를 주문하시겠습니까? (최대 10개)\n");
		while (true){
			scanf("%d", &num);		
			if ( num >=1 && num <= 10) {
				break;
			}
			else {
				printf("다시 입력하세요.\n");
			}	
		}
		numList[totalOrderCount] = num;
	
		printf("우대사항을  선택하세요.\n"); // 우대사항 선택 
		printf("1. 없음 (나이 우대는 자동처리)\n");
		printf("2. 장애인\n");
		printf("3. 국가유공자\n");
		printf("4. 다자녀\n");
		printf("5. 임산부\n");
		while (true){
			scanf("%d", &special);			
			if ( special >=1 && special <= 5) {
				break;
			}
			else {
				printf("다시 입력하세요.\n");
			}	
		}
		specialList[totalOrderCount] = special;
		float discount;
			
		if ( special == 1)
		{
			discount = 1;
		}
		if ( special == 2)
		{
			discount = 0.6;
		}
		if ( special == 3)
		{
			discount = 0.5;
		}
		if ( special == 4)
		{
			discount = 0.8;
		}
		if ( special == 5)
		{
			discount = 0.85;
		}	
		float total;
		total = price * (float)(discount) * num;
		
		printf("가격은 %.0f입니다.", total );
		
		printf("추가 주문 하시겠습니까? \n");  
		printf("1. 네 \n");
		printf("2. 아니요\n");
		
		int addOrder;
		while (true){
			scanf("%d", &addOrder);
			
			if (addOrder == 1 || addOrder == 2){
				break;
			}
			else {
			printf("다시 입력하세요.\n");
			}
		}
		if(addOrder == 2) {
			break;
		} 
		totalOrderCount++;
	}
	
	for(int index = 0; index <=totalOrderCount; index++) {
		
		printf("권종 : %d, 나이 : %d, 갯수 : %d, 우대 : %d\n", ticketList[index], ageList[index], 
																numList[index], specialList[index] );
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	  
	  
return 0;	
}


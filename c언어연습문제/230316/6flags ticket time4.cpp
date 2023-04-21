#include <stdio.h>
#include <time.h> 
//선언부 
int age, dayNight, number, price, discount, birthYear, birthMonth, birthDay, flag;
long long int socialNumber;
float discountRate;
int priceResult, discountResult, birthYearResult;
//함수선언 
//입력 
int selectType();
int inputSocialNumber();
int inputNumber();
int selectDiscount();
//계산 
int appliedPrice(int dayNight, int age);
int appliedDiscount(int discount);
//출력 
void printAll(int price, int number, float discountRate);


int main()
{

//입력부 

	selectType();					//주간야간입력 

	inputSocialNumber();			//주민번호입력 
	birthYear = birthYearResult;
	printf("%d", birthYear);

	inputNumber();					//구매표수입력 

	selectDiscount();				//우대사항입력 


//계산 

	time_t now = time(NULL);							//현재날짜불러오기
	struct tm *t = localtime(&now);
	
	int year = t->tm_year + 1900; 	// 1900년 기준으로 더해줌
	int month = t->tm_mon + 1;		 // 월은 0부터 시작하므로 1을 더해줌
	int day = t->tm_mday;


	age = (year - birthYear) % 100 + 1;					//나이계산하기 
	printf("%d = %d - %d\n", age, year, birthYear);

	appliedPrice(dayNight, age);						//주간권야간권가격 
	price = priceResult;
	printf("%d", price);

	printf("%d", discount);								//할인율 
	appliedDiscount(discount);
	discountRate = discountResult;
	printf("%f", discountRate);

//출력부 
	printAll(price, number, discountRate);
	
	
	return 0;
}


//함수
//입력부 
	//주간야간입력 
	int selectType()
	{
		printf("권종을 입력하시오:\n1. 주간권\n2. 야간권\n");
		while(true)
		 {
		 	scanf("%d", &dayNight);
		 	if(dayNight == 1 || dayNight == 2) break;
		 	else printf("다시 선택하시오\n");
		 }
		return dayNight;
	}
	//주민번호입력 
	int inputSocialNumber()
	{	
		printf("\n주민번호를 입력하시오:\n");
		while(true)
		 {
		 	scanf("%lld", &socialNumber);
		 	
		 		//주민번호 분해하기 
				birthYearResult = socialNumber / 100000000000;	//생년 
				birthMonth = socialNumber / 1000000000 % 100; //월 
				birthDay = socialNumber / 10000000 % 100;	//일 
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
	  	return birthYearResult;
	}
	//구매표수입력 
	int inputNumber()
	{
		printf("\n몇개를 주문하시겠습니까?(최대10개):\n");
		while(true)
		 {
		 	scanf("%d", &number);
		 	if(0 < number && number < 11) break;
		 	else printf("다시 선택하시오\n");
		 }
		int number;
	}
	//우대사항입력 
	int selectDiscount()
	{
		printf("\n우대사항을 선택하시오:\n1.없음(나이우대는 자동처리)\n2.장애인\n3.국가유공자\n4.다자녀\n5.임산부\n");
		while(true)
		 {
			scanf("%d", &discount);
		 	if(0 < discount && discount < 6) break;
		 	else printf("다시 선택하시오\n");
		 }
		return discount;
	}

//계산
	//주간권야간권가격계산 
	int appliedPrice(int dayNight, int age)
	{
		const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;

		if(dayNight==1)				//주간권 
		{
			if(age<=2) 
			priceResult=DAY_BABY;
		
			else if(age<=12)
			priceResult=DAY_CHILD;
			
			else if(age<=18)
			priceResult=DAY_TEEN;
			
			else if(age<=64)
			priceResult=DAY_ADULT;
			
			else
			priceResult=DAY_OLD;
		}
	
		else if(dayNight==2)		//야간권 
		{
			if(age<=2) 
			priceResult=NIGHT_BABY;
		
			else if(age<=12)
			priceResult=NIGHT_CHILD;
			
			else if(age<=18)
			priceResult=NIGHT_TEEN;
			
			else if(age<=64)
			priceResult=NIGHT_ADULT;
			
			else
			priceResult=NIGHT_OLD;
		}
		return priceResult;
	}

	//할인율 
	int appliedDiscount(int discount)
	{
	 	switch(discount)		
		{	case 1 :
				discountResult=1;
			break;
			
			case 2 :
				discountResult=0.6;
			break;
			
			case 3 :
				discountResult=0.5;
			break;
			
			case 4 :
				discountResult=0.8;
			break;
			
			case 5 :
				discountResult=0.85;
			break;
		}
		return discountResult;
	}
		
//출력부 
void printAll(int price, int number, float discountRate)
{
	printf("\n가격은 %d 원입니다.\n감사합니다.", (int)((float)price*(float)number*discountRate));
}

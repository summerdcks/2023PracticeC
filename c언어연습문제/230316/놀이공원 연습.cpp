#include <stdio.h>
#include <time.h>
//함수선언 
void selectType(int dayNight, char* typeOfTicket);
void inputSocialNumber(long long int socialNumber, int birthYear, int birthMonth, int birthDay, int flag);
void inputNumber(int number);
void selectDiscount(int discount, char* appliedDiscount);

int main()
{
//선언부 
	int age, dayNight, number, price, discount;
	int birthYear, birthMonth, birthDay, flag;
	int answer, end;
	long long int* socialNumber;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	
	int i=0;
	char* typeOfTicket[20] = { 0 };
 	int countOfTicket[20] = { 0 };
 	char* appliedDiscount[20] = { 0 };
 	char* ageOfEntrant[20] = { 0 };
	int priceOfTicket[20] = { 0 };
	
//입력부	
	//주간야간선택 
	selectType(dayNight,  typeOfTicket);
	
	//주민번호입력 
	inputSocialNumber(socialNumber, birthYear, birthMonth, birthDay, flag);
	
	//주문표수 
	inputNumber(number);
	
	//할인선택  
	selectDiscount(discount, appliedDiscount);
		
		
		
//계산		
	//현재날짜불러오기
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		
		int year = t->tm_year + 1900; // 1900년 기준으로 더해줌
		int month = t->tm_mon + 1; // 월은 0부터 시작하므로 1을 더해줌
		int day = t->tm_mday;
	
	//나이계산
		age = (year - birthYear) % 100 + 1;
	
	
		
	
	
//출력부 
	
	
	
	return 0;	
 } 


//함수 
//주간야간선택 
void selectType(int dayNight, char* typeOfTicket) {
    printf("권종을 입력하시오:\n1. 주간권\n2. 야간권\n");
    while (true) {
        scanf("%d", dayNight);
        if (dayNight == 1 || dayNight == 2) break;
        else printf("다시 선택하시오\n");
    }

    if (dayNight == 1) *typeOfTicket = "주간권";
    else typeOfTicket = "야간권";
}

//주민번호입력 
void inputSocialNumber(long long int socialNumber, int birthYear, int birthMonth, int birthDay, int flag) {
    printf("\n주민번호를 입력하시오:\n");
    while (true) {
        scanf("%lld", socialNumber);

        // 주민번호 분해하기
        birthYear = socialNumber / 100000000000; // 생년
        birthMonth = socialNumber / 1000000000 % 100; // 월
        birthDay = socialNumber / 10000000 % 100; // 일
        flag = socialNumber / 1000000 % 10; // 주민번호뒷자리첫번째

        if ((999999999999 < socialNumber && socialNumber < 10000000000000) &&
            (1 <= birthMonth && birthMonth <= 12) &&
            (1 <= birthDay && birthDay <= 31) &&
            (flag == 1 || flag == 2 || flag == 3 || flag == 4)) break;

        else printf("다시 선택하시오\n");
    }
}

//주문표수 
void inputNumber(int number) {
    printf("\n몇개를 주문하시겠습니까?(최대10개):\n");
    while (true) {
        scanf("%d", number);
        if (0 < number && number < 11) break;
        else printf("다시 선택하시오\n");
    }
}

 
void selectDiscount(int discount, char* appliedDiscount) {
    printf("\n우대사항을 선택하시오:\n1.없음(나이우대는 자동처리)\n2.장애인\n3.국가유공자\n4.다자녀\n5.임산부\n");
    while (true) {
        scanf("%d", discount);
        if (0 < discount && discount < 6) break;
        else printf("다시 선택하시오\n");
    }

    if (discount == 1) *appliedDiscount = "*우대적용없음";
    if (discount == 2) *appliedDiscount = "*장애인우대적용";
    if (discount == 3) *appliedDiscount = "*국가유공자우대적용";
    if (discount == 4) *appliedDiscount = "*다자녀우대적용";
    if (discount == 5) *appliedDiscount = "*임산부우대적용";
    
}



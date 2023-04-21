#include <stdio.h>
#include <Windows.h> 

int main()
{
	int age, time, number, price, discount, birthYear;
	long long int socialNumber;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	
	
	printf("권종을 입력하시오:\n1. 주간권\n2. 야간권\n");
	scanf("%d", &time);
	
	printf("\n주민번호를 입력하시오:\n");
	scanf("%lld", &socialNumber);
	
	printf("\n몇개를 주문하시겠습니까?(최대10개):\n");
	scanf("%d", &number);
	
	printf("\n우대사항을 선택하시오:\n1.없음(나이우대는 자동처리)\n2.장애인\n3.국가유공자\n4.다자녀\n5.임산부\n");
	scanf("%d", &discount);



	//나이계산하기
	birthYear = (int)(socialNumber/10000000000);
	SYSTEMTIME st;
    GetLocalTime(&st);
	age = (st.wYear - birthYear) % 100 + 1;
	
	
	
	if(time==1)				//주간권 
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
	
	else if(time==2)		//야간권 
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
	
	switch(discount)		//할인율
{	case 1 :
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

	printf("\n가격은 %d 원입니다.\n감사합니다.", (int)((float)price*(float)number*discountRate));
	
	
	return 0;
}

#include <stdio.h>
#include <Windows.h> 

int main()
{	int age, time, number, price, discount;
	long long int socialNumber, birthYear, today;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	
	printf("주민번호를 입력하시오:\n");
	scanf("%lld", &socialNumber);
	
	birthYear = (int)(socialNumber/100000000000);
	
	SYSTEMTIME st;
    GetLocalTime(&st);
	age = ((st.wYear - birthYear) % 100) + 1;
	
	printf("탄생년도:%d\n", birthYear);
	printf("현재년도:%d\n", st.wYear);
	printf("나이:%d", age);
	
	return 0;
	
}

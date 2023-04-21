#include <stdio.h>
#include <time.h> 

int main()
{
	int age, daynight, number, price, discount;
	long long int socialNumber, birthYear, today;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	
	printf("\n주민번호를 입력하시오:\n");
	scanf("%lld", &socialNumber);

	//현재날짜 불러오기
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	
	int year = t->tm_year + 1900; // 1900년 기준으로 더해줌
	int month = t->tm_mon + 1; // 월은 0부터 시작하므로 1을 더해줌
	int day = t->tm_mday;
	 

	//나이계산하기
	birthYear = (int)(socialNumber/10000000000);
	age = (year - birthYear) % 100 + 1;

	printf("%d", age);	
	
	return 0;
	
}

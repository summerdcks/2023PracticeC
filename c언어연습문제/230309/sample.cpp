#include <stdio.h>
#include <time.h>
int main()
{
    long long inputNumber;
    int inputYear, inputMonth, inputDay;
    int age;
    int flag;
    
    scanf("%lld", &inputNumber);
       
    time_t t = time(NULL);  
    struct tm *now = localtime(&t);  
    int todayYear = now->tm_year + 1900;  
    int todayMonth = now->tm_mon + 1;  
    int todayDay = now->tm_mday;  
	
	inputYear = inputNumber / 100000000000;
	inputNumber -= inputYear * 100000000000;
	inputMonth = inputNumber / 1000000000;
	inputNumber -= (long long)((long long)inputMonth * 1000000000);
	inputDay = inputNumber / 10000000;
	inputNumber -= (long long)((long long)inputDay * 10000000);
	flag = inputNumber / 1000000;
	
	switch(flag) 
	{
		case 1:
		case 2:
			inputYear += 1900;
			break;
		default:
			inputYear += 2000;
	}
	age = todayYear - inputYear;
	if(inputMonth > todayMonth) 
	{
		// 생일이 지나지 않음
		age--;
	} else if(inputMonth == todayMonth && inputDay > todayDay)
	{
		// 생일이 지나지 않음
		age--;
	}
	
	printf("나이 : %d\n", age);
	
	
    return 0;
}


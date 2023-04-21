#include<stdio.h>
#include<limits.h>

int main()
{
	int a, b, c, d, e;
	int max, min; 
	
	printf("숫자 A 입력:");
	scanf("%d", &a);
	printf("숫자 B 입력:");
	scanf("%d", &b); 
	printf("숫자 C 입력:");
	scanf("%d", &c); 
	printf("숫자 D 입력:");
	scanf("%d", &d); 
	printf("숫자 E 입력:");
	scanf("%d", &e); 
	
	max=a;
	if(max<=b)
	max=b;
	if(max<=c)
	max=c;
	if(max<=d)
	max=d;
	if(max<=e)
	max=e;
	
	min=a;
	if(min>=b)
	max=b;
	if(min>=c)
	max=c;
	if(min>=d)
	max=d;
	if(min>=e)
	max=e;
	
	printf("최대값은 %d입니다.\n", max);
	printf("최저값은 %d입니다.", min);
		
	return 0;
}

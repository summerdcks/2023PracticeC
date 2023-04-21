#include<stdio.h>
#include<limits.h>

int main()
{
	int a, b, c, d, e; 
	
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
	
	if(a>b && a>c && a>d && a>e)
	printf("최대값은 %d입니다.\n", a);
	
	else if(b>a && b>c && b>d && b>e)
	printf("최대값은 %d입니다.\n", b);
	
	else if(c>a && c>b && c>d && c>e)
	printf("최대값은 %d입니다.\n", c);
	
	else if(d>a && d>b && d>c && d>e)
	printf("최대값은 %d입니다.\n", d);
	
	else if(e>a && e>b && e>c && e>d)
	printf("최대값은 %d입니다.\n", e);


	if(a<b && a<c && a<d && a<e)
	printf("최저값은 %d입니다.\n", a);
	
	else if(b<a && b<c && b<d && b<e)
	printf("최저값은 %d입니다.\n", b);
	
	else if(c<a && c<b && c<d && c<e)
	printf("최저값은 %d입니다.\n", c);
	
	else if(d<a && d<b && d<c && d<e)
	printf("최저값은 %d입니다.\n", d);
	
	else if(e<a && e<b && e<c && e<d)
	printf("최저값은 %d입니다.\n", e);


	return 0;
}

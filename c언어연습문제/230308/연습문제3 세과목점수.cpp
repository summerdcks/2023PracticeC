#include<stdio.h>
int main()
{
	int korean, math, english;
	int sum;
	float avg;
	char score;
	
	
	
	printf("���������Է�:");
	scanf("%d", &korean);
	printf("���������Է�:");
	scanf("%d", &math);
	printf("���������Է�:");
	scanf("%d", &english);
	
	sum = korean+math+english;
	avg= (float)sum/3.0;
	
	printf("����:%d��, ����:%d��, ����:%d��\n", korean, math, english);
	printf("����:%d\n", sum);
	printf("���:%.2f\n", avg);
	
	if(avg>=90)
	printf("���:A");
	
	else if(avg>=80 && avg<90)
	printf("���:B");
	
	else if(avg>=70 && avg<80)
	printf("���:C");
	
	else if(avg>=60 && avg<70)
	printf("���:D");
	
	else
	printf("���:F");

	
	return 0;
}

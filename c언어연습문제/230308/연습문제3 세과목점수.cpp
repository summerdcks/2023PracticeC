#include<stdio.h>
int main()
{
	int korean, math, english;
	int sum;
	float avg;
	char score;
	
	
	
	printf("국어점수입력:");
	scanf("%d", &korean);
	printf("수학점수입력:");
	scanf("%d", &math);
	printf("영어점수입력:");
	scanf("%d", &english);
	
	sum = korean+math+english;
	avg= (float)sum/3.0;
	
	printf("국어:%d점, 수학:%d점, 영어:%d점\n", korean, math, english);
	printf("총점:%d\n", sum);
	printf("평균:%.2f\n", avg);
	
	if(avg>=90)
	printf("등급:A");
	
	else if(avg>=80 && avg<90)
	printf("등급:B");
	
	else if(avg>=70 && avg<80)
	printf("등급:C");
	
	else if(avg>=60 && avg<70)
	printf("등급:D");
	
	else
	printf("등급:F");

	
	return 0;
}

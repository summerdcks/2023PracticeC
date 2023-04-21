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
	
	
	
	switch((int)avg/10)
	{
		
	case 10 :
	case 9 :
	printf("등급:A");
	break;
		
	case 8 :
	printf("등급:B");
	break;
	
	case 7 :
	printf("등급:C");
	break;
	
	case 6 :
	printf("등급:D");
	break;
	
	default :
	printf("등급:F");
	break;
	
	}
	
	return 0;
}

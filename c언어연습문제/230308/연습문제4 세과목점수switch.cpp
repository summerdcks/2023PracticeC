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
	
	
	
	switch((int)avg/10)
	{
		
	case 10 :
	case 9 :
	printf("���:A");
	break;
		
	case 8 :
	printf("���:B");
	break;
	
	case 7 :
	printf("���:C");
	break;
	
	case 6 :
	printf("���:D");
	break;
	
	default :
	printf("���:F");
	break;
	
	}
	
	return 0;
}

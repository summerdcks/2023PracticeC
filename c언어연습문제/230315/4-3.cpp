#include <stdio.h>
#define MAX 3

int main()
{
	int student[MAX][3] = {0}; 					//[번호][국어 영어 수학]
	int sum[MAX] = {0};
	float average[MAX] = {0}; 
	char grade[MAX] = {0};
	int rank[MAX] = {0}; 
	int i = 1;
	




	for( i = 1 ; i <= MAX ; i++ )
	{
		printf("[%d] 학생의 국어, 영어, 수학점수 입력:", i );
		scanf("%d %d %d", &student[i][0], &student[i][1], &student[i][2]);
	

		sum[i] = student[i][0] + student[i][1] + student[i][2];
		average[i] = (float)sum[i]/3;
		
		
		
		if(90<= average[i]) 
		{
			grade[i] = 'A';
		}
		else if(80<= average[i])
		{
			grade[i] = 'B';
		}
		else if(70<= average[i])
		{
			grade[i] = 'C';
		}
		else if(60<= average[i])
		{
			grade[i] = 'D';
		}
		else
		{
			grade[i] = 'F';
		}
		
//		
//		for(h = 1 ; h <= MAX ; h++)
//		{
//			for(j = 1 ; j <= 3 ; j++)
//			{
//			student[h][j]
//			}
//
//		}		
		
	}
	
	

		
		
		
	printf("==========================성적표============================\n------------------------------------------------------------\n");
	printf("번호\t국어\t영어\t수학\t합계\t평균\t학점\t석차\n");
	
	for( int i = 1 ; i <= MAX ; i++ )
	{
		printf("%d\t%d\t%d\t%d\t%d\t%.2f\t%c\t%d\n", i, student[i][0], student[i][1], student[i][2], sum[i], average[i], grade[i], rank[i]);
	}
	

	
	return 0;
}

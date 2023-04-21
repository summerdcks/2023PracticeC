#include <stdio.h>
int main()
{
	int subjects, students;
	int i=0;
	int student[20][20] = {0};
	int sum[20] = {0};
	float average[20] = {0};
	int sumsub[20] = {0};
	float averagesub[20] = {0};
	

	printf("과목 수 입력: ");
	scanf("%d", &subjects); 
	printf("학생 수 입력: ");
	scanf("%d", &students);
	
	
	
	for( i = 0 ; i < students ; i++ )
	{
		printf("[%d] 학생의 C언어, 자바, 리눅스점수 입력:", i+1 );
		scanf("%d %d %d", &student[i][0], &student[i][1], &student[i][2]);


		sum[i] = student[i][0] + student[i][1] + student[i][2];
		average[i] = (float)sum[i]/3;
		

	}
	
	for( i = 0 ; i < students ; i++ )
	{
		printf("koposw %d 학생의 과목 총점은 %d점, 평균은 %.2f입니다.\n", i+1, sum[i], average[i] );
	}

	for( int i = 0 ; i < students ; i++ )
		{
			for( int j = 0 ; j < students ; j++ )
			{
				sumsub[i] += student[j][i];
			}
			
			averagesub[i] = (float)sumsub[i]/students;	
		}
		
	printf("C언어 전체평균: %.2f\n자바 전체평균: %.2f\n리눅스 전체평균: %.2f", averagesub[0], averagesub[1], averagesub[2]);
	
	
	
	
	return 0;
}

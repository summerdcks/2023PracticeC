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
	

	printf("���� �� �Է�: ");
	scanf("%d", &subjects); 
	printf("�л� �� �Է�: ");
	scanf("%d", &students);
	
	
	
	for( i = 0 ; i < students ; i++ )
	{
		printf("[%d] �л��� C���, �ڹ�, ���������� �Է�:", i+1 );
		scanf("%d %d %d", &student[i][0], &student[i][1], &student[i][2]);


		sum[i] = student[i][0] + student[i][1] + student[i][2];
		average[i] = (float)sum[i]/3;
		

	}
	
	for( i = 0 ; i < students ; i++ )
	{
		printf("koposw %d �л��� ���� ������ %d��, ����� %.2f�Դϴ�.\n", i+1, sum[i], average[i] );
	}

	for( int i = 0 ; i < students ; i++ )
		{
			for( int j = 0 ; j < students ; j++ )
			{
				sumsub[i] += student[j][i];
			}
			
			averagesub[i] = (float)sumsub[i]/students;	
		}
		
	printf("C��� ��ü���: %.2f\n�ڹ� ��ü���: %.2f\n������ ��ü���: %.2f", averagesub[0], averagesub[1], averagesub[2]);
	
	
	
	
	return 0;
}

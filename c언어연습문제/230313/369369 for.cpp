#include <stdio.h>
int main ()
{
	int number, i, count;
	
	printf("���� �� ���� �ұ��? : ");
	scanf("%d", &number);
	
	for( i = 1 ; i <= number ; i++ ) 
	{
		count=0;
	
		for ( int temp = i ; temp > 0 ; temp /= 10 )
		{
			if((temp%10==3) || (temp%10==6) || (temp%10==9))
				count++;
		}

		if(count > 0)
		{
			for(int j = 0; j < count ; j++)
			{
				printf("¦");
			}
		}
		
		
		else
		printf("%d", i);	
		
		printf("\n");
	}
	
	

	
	
	return 0;
}

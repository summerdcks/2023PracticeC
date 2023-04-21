#include <stdio.h>
int main ()
{
	int number, i, count;
	
	printf("숫자 몇 까지 할까요? : ");
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
				printf("짝");
			}
		}
		
		
		else
		printf("%d", i);	
		
		printf("\n");
	}
	
	

	
	
	return 0;
}

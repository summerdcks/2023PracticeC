#include <stdio.h>
int main()
{
	int i, n, result;
	
	printf("구구단 출력해보기\n");	
	
	for( n=1 ; n<10 ; n++)
	{
		printf("\n==%d단==\n", n);
		
		for( i=1 ; i<10 ; i++ ) 
		{
			if(n%3!=0)
			{
				printf("%d * %d = %d\n", n, i, n*i);
			}
		}
		
		if(n%3==0)
		printf("미안~ Skip~!\n");	
			
	}
	return 0; 
}

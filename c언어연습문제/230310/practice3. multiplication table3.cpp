#include <stdio.h>
int main()
{
	int i, n, result;
	
	printf("������ ����غ���\n");	
	
	for( n=1 ; n<10 ; n++)
	{
		printf("\n==%d��==\n", n);
		
		for( i=1 ; i<10 ; i++ ) 
		{
			if(n%3!=0)
			{
				printf("%d * %d = %d\n", n, i, n*i);
			}
		}
		
		if(n%3==0)
		printf("�̾�~ Skip~!\n");	
			
	}
	return 0; 
}

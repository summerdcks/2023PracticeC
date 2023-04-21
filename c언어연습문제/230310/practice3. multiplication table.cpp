#include <stdio.h>
int main()
{
	int i, n, result;
	
	printf("구구단 출력해보기\n");
	printf("몇 단을 보시겠습니까? :  ");	
	scanf("%d", &n);
	
	for( i=1 ; i<10 ; i++ ) 
	{
		
		printf("%d * %d = %d\n", n, i, n*i);
		
	}

	
	return 0; 
}

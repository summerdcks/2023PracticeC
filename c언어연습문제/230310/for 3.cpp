#include <stdio.h>
int main()
{
	int i, count;
	scanf("%d", &count);
	
	for( i = count; i > 0; i-- ) // count부터 0 전까지 감소 반복 
	{
		printf("Hello, world! %d\n", i); 
	}
	
	printf("%d", i);		//반복문이 끝난 뒤 i값=0
		
	return 0; 
}

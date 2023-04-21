#include <stdio.h>
int main()
{
	int i, count;
	scanf("%d", &count);
	
	for( i = 0; i < count; i++ ) //0부터 count-1까지 반복 
	{
		printf("Hello, world! %d\n", i); 
	}
	
	printf("%d", i);		//반복문이 끝난 뒤 i값=count
		
	return 0; 
}

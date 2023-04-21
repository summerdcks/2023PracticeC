#include <stdio.h>
int main()
{
	int i;
	for( i = 0; i < 10; i++ ) //0부터 9까지 10번 반복 
	{
		printf("Hello, world! %d\n", i); 
	}
	
	printf("%d", i);		//반복문이 끝난 뒤 i값=10 
	
	return 0; 
}

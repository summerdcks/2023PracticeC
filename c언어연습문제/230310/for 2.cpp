#include <stdio.h>
int main()
{
	int i, count;
	scanf("%d", &count);
	
	for( i = 0; i < count; i++ ) //0���� count-1���� �ݺ� 
	{
		printf("Hello, world! %d\n", i); 
	}
	
	printf("%d", i);		//�ݺ����� ���� �� i��=count
		
	return 0; 
}

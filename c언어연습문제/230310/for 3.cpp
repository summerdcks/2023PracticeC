#include <stdio.h>
int main()
{
	int i, count;
	scanf("%d", &count);
	
	for( i = count; i > 0; i-- ) // count���� 0 ������ ���� �ݺ� 
	{
		printf("Hello, world! %d\n", i); 
	}
	
	printf("%d", i);		//�ݺ����� ���� �� i��=0
		
	return 0; 
}

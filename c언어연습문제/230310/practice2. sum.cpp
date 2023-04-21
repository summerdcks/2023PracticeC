#include <stdio.h>
int main()
{
	int i, sum=0;
	
	printf("1에서 n까지 합은? \n");
	printf("n을 입력하세요:  ");	
	scanf("%d", &n);
	
	for( i=1 ; i<=n ; i++ ) 
	{
		sum=sum+i;
	}

	printf("1에서 %d까지의 합은 %d입니다.", n, sum);
	
	return 0; 
}

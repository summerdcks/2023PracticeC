#include <stdio.h>
int main()
{
	int i, sum=0;
	
	printf("1���� n���� ����? \n");
	printf("n�� �Է��ϼ���:  ");	
	scanf("%d", &n);
	
	for( i=1 ; i<=n ; i++ ) 
	{
		sum=sum+i;
	}

	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);
	
	return 0; 
}

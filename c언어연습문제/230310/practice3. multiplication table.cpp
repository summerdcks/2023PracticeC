#include <stdio.h>
int main()
{
	int i, n, result;
	
	printf("������ ����غ���\n");
	printf("�� ���� ���ðڽ��ϱ�? :  ");	
	scanf("%d", &n);
	
	for( i=1 ; i<10 ; i++ ) 
	{
		
		printf("%d * %d = %d\n", n, i, n*i);
		
	}

	
	return 0; 
}

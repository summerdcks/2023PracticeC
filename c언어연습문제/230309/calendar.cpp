#include <stdio.h>
int main ()
{
	int year, month;
	
	printf("�⵵ �Է� : ");
	while(true)
	{
			scanf("%d", &year);
			if( 999 < year && year < 10000 ) break;
			else if(year == 0) printf("�����մϴ�.");
			else printf("�ٽ� �Է��Ͻÿ�\n");
			
	}

	printf("�� �Է� : ");
	while(true)
	{
			scanf("%d", &month);
			if( 1 <= month && month <= 12 ) break;
			else printf("�ٽ� �Է��Ͻÿ�\n");
	}

	
	
	printf("\n====================== %d�� %d�� =====================\n\n", year, month);
	printf("��	��	ȭ	��	��	��	��\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
